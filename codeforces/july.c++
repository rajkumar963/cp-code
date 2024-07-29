//A. In Search of an Easy Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//       int n;
//       vector<int>a(n);
//       bool flag=false;
//      for(int i=0;i<n;i++){
//          cin>>a[i];
//          if(a[i]==1){
//              flag=true;
//          }
//      }
//     cout << (flag ? "HARD" : "EASY") << endl;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;   
//     vector<int> responses(n);
//     bool isHard = false;   
//     for (int i = 0; i < n; i++) {
//         cin >> responses[i];
//         if (responses[i] == 1) {
//             isHard = true;
//         }
//     }   
//     cout << (isHard ? "HARD" : "EASY") << endl;   
//     return 0;
// }

//A. Lucky Division
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }


//A. George and Accommodation
//  #include<bits/stdc++.h>
//  using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int p,q;
//     int avl=0;
//     while(t--){
//         cin>>p>>q;
//          if(q-p>=2){
//            avl++;
//         }
//     }
//     cout<<avl<<endl;
// }

//A. Calculating Function
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     long long sum = 0;
//     if (n % 2 == 0)
//     {
//         sum=n/2;
//     }
//     else
//     {
//         sum=-(n+1)/2;
//     }
//     cout << sum << endl;
// }

//A. Checkpoints
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,q;
//     cin>>n>>q;
//     multiset<int>s;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         s.insert(x);
//     } 
//     for(int i=0;i<q;i++){
//         string str;int r;
//        cin>>str>>r;           
//     if(str=="ADD")
//     {
//         s.insert(r);
//     }else{
//         s.erase(s.find(r));
//     }
//     cout<<*s.rbegin()-*s.begin()<<endl;
// }
// }

// C. Easiest Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int res= ((n / k) + 1) * k;
//     cout<<res<<endl;
// }

// Prime Triplets
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//      n-=4;
//     cin>>n;
//     for(int i=3;i<=10^6;i++){
//         if(prime(i)){      
//         }
//     }
// }

//D. Another Missile Problem
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<double> p(n);
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> p[i];
//     } 
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }   
//     double total_prob = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] >= m) {
//             total_prob += p[i];
//         }
//     }   
//   for (int i = 0; i < n; i++) {
//         if (a[i] >= m) {
//             printf("%.9f ", p[i] / total_prob);
//         } else {
//             printf("0.000000000 ");
//         }
//     } 
//     printf("\n");
//     return 0;
// }

//A. Even Odds
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    long long n,k;
//     cin>>n>>k;
//     if(k<=(n+1)/2){
//         cout<<2*k-1<<endl;
//     }else{
//         cout<<2*(k-(n+1)/2)<<endl;
//     }
// }

//     long long n,k;
//      cin>>n>>k;
//     vector<long long>v,r;
//     for(int i=1;i<=n;i++){
//          if(i%2==1){
//             v.push_back(i);
//         }else{
//             r.push_back(i);
//         }
//     }
//     v.insert(v.end(),r.begin(),r.end());
//     cout<<v[k-1]<<endl;
// }







