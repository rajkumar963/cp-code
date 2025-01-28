#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans(n);
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