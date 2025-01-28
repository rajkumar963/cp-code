// //Set
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){ 
//     int t;
//     cin>>t;
//     while(t--){
//         ll l,r,k;
//         cin>>l>>r>>k;
//         ll res=r/k-l+1;
//         if(res<=0) 
//         cout<<0<<endl;
//         else
//         cout<<res<<endl;
//     }
// }


// Replacement
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s,r;
    cin>>s>>r;
    r.pop_back();   
    int c1=count(s.begin(),s.end(),'1')-count(r.begin(),r.end(),'0');
    int c0=count(s.begin(),s.end(),'0')-count(r.begin(),r.end(),'1');
    if(c1>0 && c0>0)
    cout<<"YES\n";
    else
    cout<<"NO\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}