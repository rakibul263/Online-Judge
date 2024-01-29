#include <iostream>

using namespace std;

int isPalindrome(int num)
{
    int rem, rev = 0, t = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    return (rev == t);
}

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;
        if (isPalindrome(n))
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }
    return 0;
}
