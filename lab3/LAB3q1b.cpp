#include <iostream>
using namespace std;

int main() {
    

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int left = (p && !q) || r;
                int right = (!p || r);

                int result1 = (!left || right);

                cout << p << " " << q << " " << r << " | " << result1 <<" \n";
            }
        }
    }

    return 0;
}
