#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 4 == 1) {
            for (int j = 1; j <= m; ++j) {
                cout << '#';
            }
        } else if (i % 4 == 3) {
            for (int j = 1; j <= m; ++j) {
                cout << '#';
            }
        } else if (i % 4 == 0) {
            cout << '#';
            for (int j = 2; j <= m; ++j) {
                cout << '.';
            }
        } else {
            for (int j = 1; j < m; ++j) {
                cout << '.';
            }
            cout << '#';
        }
        cout << '\n';
    }
    
    return 0;
}
