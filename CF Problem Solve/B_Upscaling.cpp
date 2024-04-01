/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-28 21:00:19
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define lineBreak cout << '\n';
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0, c = 2 * n, r = 2 * n, currentRow = 0, currentCol = 0;
        bool flag = false, rflag = false;
        while (currentRow < r)
        {
            if (count == 2)
            {
                flag = !flag;
                count = 0;
            }
            count++;
            if (!flag)
                cout << "#";
            else
                cout << ".";
            currentCol++;
            if (currentCol == c)
            {
                currentCol = 0;
                currentRow++;
                lineBreak;
                count = 0;
                if (currentRow % 2 == 0)
                {
                    rflag = !rflag;
                }
                flag = rflag;
            }
        }
    }
    return 0;
}