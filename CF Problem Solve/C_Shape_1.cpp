#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int star = n;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < star; c++)
        {
            cout << "*";
        }
        star--;
        cout << endl;
    }
    return 0;
}
