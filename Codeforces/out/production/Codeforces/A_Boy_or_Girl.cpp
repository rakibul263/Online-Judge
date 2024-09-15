/***************************************
Author: Md Rakibul Hasan
date: 2024-09-12 19:19:25
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    set<int> st;
    for (char ch : str)
    {
        st.insert(ch);
    }
    int length = st.size();
    // cout << length << endl;

    if (length % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}