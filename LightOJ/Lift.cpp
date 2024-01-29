#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, myPos, liftPos, sum = 0;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> myPos >> liftPos;
        sum = 11 + 8 + myPos * 4 + abs(myPos - liftPos) * 4;
        cout << "Case " << i << ": " << sum<<endl;
    }
    return 0;
}
