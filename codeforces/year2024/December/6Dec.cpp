// //Line Breaks
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         vector<string> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int curLen=0,x=0;
//         for(int i=0;i<n;i++){
//             if(v[i].size()+curLen<=m){
//                 curLen+=v[i].size();
//                 x++;
//             }else{
//                 break;
//             }
//         }
//         cout<<x<<endl;
//     }
// }


//Bowling Frame
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
       ll w,b;
       cin>>w>>b;
       ll sum=w+b;
       ll res=1;
       while(res*(res+1)/2<=sum){
           res++;
       }
       cout<<res-1<<endl;
    }
}