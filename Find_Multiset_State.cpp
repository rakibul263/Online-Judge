#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n, p;
    cin >> n >> p;
    multiset<int> a;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.insert(num);
    }

    int i = 0;
    while (i < p)
    {
        int x = *a.begin();
        int y = *a.rbegin();

        a.erase(a.find(x));
        a.erase(a.find(y));

        a.insert(x + y);
        i++;
    }

    for (auto it = a.begin(); it != a.end(); it++)
        cout << *it << " ";

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
