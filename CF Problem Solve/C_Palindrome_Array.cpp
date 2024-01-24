#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(const vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (isPalindrome(v)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
