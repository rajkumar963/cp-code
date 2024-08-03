//A. Hulk
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  if(n==1){
//      cout<<"I hate it"<<endl;
//  }else{
//      cout<<"I hate ";
//         for(int i=2;i<=n;i++){
//             if(i%2==0){
//             cout<<"that I love ";
//         }else{
//             cout<<"that I hate ";
//         }
//         }
//         cout<<"it"<<endl;
//     }
// }

//A. Divisibility Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b;
//         cin>>a>>b;
//       int x;
//       if(a%b==0){
//           cout<<"0"<<endl;
//       }else{
//       x=a%b;
//        cout<<b-x<<endl;
//     }
//  }
// }


//A. Gravity Flip
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

//A. Say Hello With C++
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     cout<<"Hello,"<<s;
// }

//A. Winter Sale
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,p;
//     cin>>x>>p;
//     float y=(p*100.0)/(100-x);
//       y = round(y * 100.0) / 100.0;
//      cout << fixed << setprecision(2) << y << endl;
// }

//B. Memo and Momo
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b,k;
//     cin>>a>>b>>k;
//     if(a%k==0 && b%k==0){
//         cout<<"Both";
//     }else if(a%k==0 && b%k!=0){
//         cout<<"Memo";
//     }else if(a%k!=0 && b%k==0){
//         cout<<"Momo";
//     }else{
//         cout<<"No One";
//     }
// }