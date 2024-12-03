#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int n = 1; n <= 1000; ++n) {
        int total_price = n * k;
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
