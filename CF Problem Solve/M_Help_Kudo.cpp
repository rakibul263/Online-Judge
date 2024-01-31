#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int clockwise = abs(a - b);
    int anticlockwise = n - max(a, b) + min(a, b);

    cout << min(clockwise, anticlockwise) << endl;
    return 0;
}
