/**
 * author: Md Rakibul Hasan
 * date: 2024-03-23 02:41:20
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    cin >> T; // Read the number of test cases

    while (T--)
    {
        cin >> N;

        if (N <= 1)
        {
            cout << "NO" << endl;
            continue;
        }
        int limit = sqrt(N);
        bool isPrime = true;
        for (int i = 2; i <= limit; ++i)
        {
            if (N % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        cout << (isPrime ? "YES" : "NO") << endl;
    }

    return 0;
}