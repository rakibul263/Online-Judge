#include <bits/stdc++.h>
using namespace std;

int main(){
    int boys, girls;
    cin >> boys >> girls;

    int total_slices = (boys + 1) * 4 + girls * 3;
    int total_pizzas = ceil(total_slices / 8.0);

    cout << total_pizzas << '\n';

    return 0;
}
