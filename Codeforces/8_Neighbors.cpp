#include<bits/stdc++.h>
using namespace std;

#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--; 
    y--;

    int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

    bool all_x = true;

    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(arr[nx][ny] != 'x'){
                all_x = false;
                break;
            }
        }
    }

    if(all_x) 
        cout << "yes" << endl;
    else 
        cout << "no" << endl;
}

/*****Main Function*****/
int32_t main(){
    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
    return 0;
}
