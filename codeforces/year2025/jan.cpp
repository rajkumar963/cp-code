//A. MEX Table
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,m;
//         cin>>n>>m;
//         long long ans=max(n,m);
//         cout<<ans+1<<endl;
//     }
// }


//A. MEX Destruction

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t,n,a[100001],ans;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         ans=0;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//             if(a[i]>0&&a[i-1]==0) ans++;
//         }
//         cout<<min(ans,2)<<"\n";
//     }
// }

//Fibbonacciness
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     // Write C++ code here
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,d,e;
//         cin>>a>>b>>d>>e;
//         int maxcnt=0;
//         for(int c=-100;c<=200;c++){
//             int cnt=0;
//             if(c==a+b){ cnt++;}
//             if(d==b+c){cnt++;}
//             if(e==c+d){cnt++;}
//             maxcnt=max(maxcnt,cnt);
//         }
//         cout<<maxcnt<<endl;
//     }
//     return 0;
// }


//Game of Mathletes
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       sort(a,a+n);
        int l=0,r=n-1;
        while(l<r){
            int sum=a[l]+a[r];
            if(sum==k){
                cnt++;
                l++;
                r--;
            }
            else if (sum < k) {
                l++;
            } else {
                r--; 
            }
        }
        cout<<cnt<<endl; 
    }
}