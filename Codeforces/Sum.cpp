#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Check if one of the numbers is the sum of the other two
        if (a + b == c || a + c == b || b + c == a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
