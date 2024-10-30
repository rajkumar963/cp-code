// Find Minimum Operations
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int ans=0;
//         if(k==1){
//             cout<<n<<endl;
//             continue;
//         }
//         while(n){
//             ans+=n%k;
//             n/=k;
//         }
//         cout<<ans<<endl;
//     }
// }


//max
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int a[t];
//     for(int i=0;i<t;i++){
//         cin>>a[i];
//     }   
//     sort(a,a+t);
//     cout<<a[t-1]<<endl;
// }


//Game with Doors
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int l,r;
//         cin>>l>>r;
//         int L,R;
//         cin>>L>>R;
//         int ans=max(1,min(r,R)-max(l,L)+(l!=L)+(r!=R));
//         cout<<ans<<endl;
//     }
// }


//Max Plus Size
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         int sum1=0,sum2=0,m1=0,m2=0;
//         for(int i=0;i<n;i+=2){
//             sum1++;
//             m1=max(m1,a[i]);
//         }
//         for(int i=1;i<n;i+=2){
//             sum2++;
//             m2=max(m2,a[i]);
//         }
//         cout<<max(sum1+m1,sum2+m2)<<endl;
//     }
// }


//. Two Screens
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int q;
//     cin>>q;
//     while(q--){
//         string s,t;
//         cin>>s>>t;
//         int ans=0;
//         int len=min(s.length(),t.length());
//         for(int i=0;i<len;i++){
//             if(s[i]==t[i]){
//                 ans++;
//             }else{
//                 break;
//             }
//         }
//         if(ans>0){
//             int x=t.size()-ans+1;
//             cout<<x+s.size()<<endl;
//         }
//         else{
//           cout<<s.size()+t.size()<<endl;
//         }      
//     }
// }


// //A. Sakurako and Kosuke
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%2==0){
//             cout<<"Sakurako\n";
//         }else{
//             cout<<"Kosuke \n";
//         }
//     }
// }


// //A. Profitable Interest Rate
// #include<bits/stdc++.h>
// using namespace std;
//   int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         if(a>=b){
//             cout<<a<<endl;
//         }else if(a*2<=b){
//             cout<<0<<endl;
//         }
//         else{
//             cout<<2*a-b<<endl;
//         }
//     }
// }



// //Perpendicular Segments 
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll x,y,k;
//         cin>>x>>y>>k;
//         ll len=min(x,y);
//         cout<<"0 0 "<<len<<" "<<len<<endl;
//         cout<<"0 "<<len<<" "<<len<<" 0"<<endl;
//     }
// }


// //Sliding 
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,m,r,c;
//         cin>>n>>m>>r>>c;
//         ll res=(2*m-1)*(n-r)+m-c;
//         cout<<res<<endl;
//     }
//     return 0;
// }



//Everyone Loves Tres
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
    }
}