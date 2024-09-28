/********************************************
Title: Candies.cpp
Author: https://github.com/rakibul263
Created: 2024-09-27 14:03:19
********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;
    return 0;
}