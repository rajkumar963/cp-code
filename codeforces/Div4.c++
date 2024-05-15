//My First Sorting Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         if(x>y){
//            cout<<y<<" " <<x<<endl; 
//         }else{
//             cout<<x<<" "<<y<<endl;
//         }
//     }
// }

// Different String
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//          string r = s;
//         sort(r.begin(),r.end());
//         reverse(r.begin(),r.end());
//          if (s != r) {
//             cout<<"YES\n"<<r<<endl;
//          }else{
//             cout<<"NO"<<endl;
//          }
        
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         string r = s;
//         sort(r.begin(),r.end(), greater<char>());
//         if (s != r) {
//             cout<<"YES\n"<<r<<endl;
//         } else {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

//Calculating function f=-1+2-3+4-5+6-7+8-9+...n
// #include <iostream>
// using namespace std;
// long long calculateFunction(long long n) {
//     if (n % 2 == 0) {
//         return n / 2;
//     } else {
//         return -(n + 1) / 2;
//     }
// }
// int main() {
//     long long n;
//     cin >> n;
//     cout << calculateFunction(n) << endl;
//     return 0;
// }





//Remove smallest

//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int t;
//      cin>>t;
//      while(t--){
//          int n;
//          cin>>n;
//          int arr[n],i;
//          for( i=0;i<n;i++){
//              cin>>arr[i];
//          }
//          if(abs(arr[i]-arr[i+1])>1){
//          cout<<"YES"<<endl;
//          }else{
//              cout<<"NO"<<endl;
//          }
//      }
// }

// #include<iostream>
// using namespace std;
// void possible(int n, int a[]) {
//     for(int i = 1; i < n; i++) {
//         if(a[i] - a[i-1] > 1) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }
// int main() {
//     int t,n;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//          possible(n, a);
//     }
//      return 0;
// }


// String Task
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     string result;
//     for (int i = 0; i < s.length(); i++) {
//         s[i] = tolower(s[i]);
//     }
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
//             result+='.';
//             result+=s[i];
//         }
//     }
//     cout << result << endl;
//   return 0;
// }
