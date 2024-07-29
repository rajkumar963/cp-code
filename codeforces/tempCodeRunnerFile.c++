#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    vector<int>v,r,ans;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
         if(i%2==1){
            v.push_back(i);
        }else{
            r.push_back(i);
        }
    }
    v.insert(v.end(),r.begin(),r.end());
    cout<<v[k-1]<<endl;
}
