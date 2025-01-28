//Greedy Monocarp
#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

void solve() {
    int n, k;
        cin >> n >> k; 
        vector<int>coin(n);
        for (int i = 0; i < n; i++) {
            cin >> coin[i]; 
        }
        sort(coin.begin(), coin.end(), comp);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum+=coin[i];
            if(sum>k){
                 sum=sum-coin[i];
                cout << k-sum << endl;
                return;
            }
        }
        cout << k-sum << endl;
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
