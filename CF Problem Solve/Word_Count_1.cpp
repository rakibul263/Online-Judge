#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int count = 0;
        while (ss >> word)
        {
            count++;
        }
        cout << "Count = " << count << endl;
    }
    return 0;
}
