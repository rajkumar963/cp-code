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
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum1=0,sum2=0,m1=0,m2=0;
        for(int i=0;i<n;i+=2){
            sum1++;
            m1=max(m1,a[i]);
        }
        for(int i=1;i<n;i+=2){
            sum2++;
            m2=max(m2,a[i]);
        }
        cout<<max(sum1+m1,sum2+m2)<<endl;

    }
}
