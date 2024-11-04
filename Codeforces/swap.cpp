/********************************************
Title: swap.cpp
Author: https://github.com/rakibul263
Created: 2024-11-04 19:10:38
********************************************/

#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    cin>>x>>y;
    swap(x, y);
    
    return 0;
}