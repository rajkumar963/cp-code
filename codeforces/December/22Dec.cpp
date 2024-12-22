//A. Kevin and Combination Lock
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       ll x;
//       cin>>x;
//       if(x%33==0){
//           cout<<"YES"<<endl;
//       }else{
//           cout<<"NO"<<endl;
//       }
//     }
// }


//B. Kevin and Permutation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans;
        if(k==1){
            for(int i=0;i<n;i++){
                ans.push_back(i+1);
            }
        }else{
            int m=(n+1)/2;
            for(int i=m+1,j=1;i<=n||j<=m;i++,j++){
                if(i<=n){
                    ans.push_back(i);
                }
                if(j<=m){
                    ans.push_back(j);
                }
            }
        }
        for(int i=0;i<ans.size();i++){
              cout<<ans[i]<<" ";      
        }
        cout<<endl;
    }
}