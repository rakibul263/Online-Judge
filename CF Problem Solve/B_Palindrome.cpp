#include <iostream>

using namespace std;

void isPalindrome(int num)
{
    int rem, rev = 0, t = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if (rev == t)
        cout << rev << endl
             << "YES";
    else
        cout << rev << endl
             << "NO";
}

int main()
{
    int n;
    cin >> n;
    isPalindrome(n);
    return 0;
}
