#include <iostream>
using namespace std;

int main()
{
    int t;
    // cout << "Enter Number: ";
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n = 0, temp = 0, r = 0, sum = 0;
        cin >> n;
        temp = n;

        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }

        cout << "Case " << i << ": ";
        if (temp == sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}