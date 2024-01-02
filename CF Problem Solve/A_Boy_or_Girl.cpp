#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int count_letter = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
            count_letter++;
    }
    int without_dup = count_letter + 1;

    // cout<<without_dup;
    
    if(without_dup%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else 
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
