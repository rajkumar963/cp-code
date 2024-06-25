// Problem Generator
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         string a;
//         cin >> a;
//         unordered_map<char, int> mp;
//         for (char p : a)
//         {
//             mp[p]++;
//         }
//         int cot = 0;
//         for (char level = 'A'; level <= 'G'; level++)
//         {
//             int req = m;
//             if (mp.count(level))
//             {
//                 req -= mp[level];
//             }
//             cot += max(0, req);
//         }
//         cout << cot << endl;
//     }
// }



// X Axis
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         int x=(abs(a-a)+abs(a-b)+abs(a-c));
//         int y=(abs(b-b)+abs(b-a)+abs(b-c));
//         int z=(abs(c-a)+abs(c-b)+abs(c-c));
//         cout<<min(x,min(y,z))<<endl;
//     }
//  }

//Matrix Stabilization
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         vector<vector<int>> a(n, vector<int>(m));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>a[i][j];
//             }
//         }
//         int count=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(a[i][j]==1){
//                     count++;
//                 }
//             }
//         }
//         cout<<count<<endl;
//     }
// }
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// const int dx[] = {-1, 0, 1, 0};
// const int dy[] = {0, 1, 0, -1};
// struct Cell {
//     int i, j, value;
//     Cell(int i, int j, int value) : i(i), j(j), value(value) {}
// };
// void stabilize(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     auto compare = [](const Cell& a, const Cell& b) {
//         if (a.value != b.value) return a.value < b.value;
//         if (a.i != b.i) return a.i > b.i;
//         return a.j > b.j;
//     };
//     priority_queue<Cell, vector<Cell>, decltype(compare)> pq(compare);
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             pq.push(Cell(i, j, matrix[i][j]));
//         }
//     }
//     while (!pq.empty()) {
//         auto cell = pq.top();
//         pq.pop();
//         if (cell.value != matrix[cell.i][cell.j]) continue;
//         bool is_peak = true;
//         for (int k = 0; k < 4; ++k) {
//             int ni = cell.i + dx[k];
//             int nj = cell.j + dy[k];
//             if (ni >= 0 && ni < n && nj >= 0 && nj < m && matrix[cell.i][cell.j] <= matrix[ni][nj]) {
//                 is_peak = false;
//                 break;
//             }
//         }
//         if (is_peak) {
//             matrix[cell.i][cell.j]--;
//             pq.push(Cell(cell.i, cell.j, matrix[cell.i][cell.j]));
//         }
//     }
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> matrix(n, vector<int>(m));
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cin >> matrix[i][j];
//             }
//         }
//         stabilize(matrix);
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cout << matrix[i][j] << " ";
//             }
//             cout << '\n';
//         }
//     }
//     return 0;
// }


