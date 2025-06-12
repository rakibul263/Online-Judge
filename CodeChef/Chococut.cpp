#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int total = n * m;
        int max_of_alice =0;

        if (k == 0) {
            max_of_alice = total;
        } else {
            for (int r = 1; r < n; ++r) {
                int part1 = r * m;
                int part2 = (n - r) * m;
                if (part1 >= k) max_of_alice = max(max_of_alice, part2);
                if (part2 >= k) max_of_alice= max(max_of_alice, part1);
            }

            for (int c = 1; c < m; ++c) {
                int part1 = c * n;
                int part2 = (m - c) * n;
                if (part1 >= k) max_of_alice = max(max_of_alice, part2);
                if (part2 >= k) max_of_alice = max(max_of_alice, part1);
            }
        }

        cout << max_of_alice << '\n';
    }
}