#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll len=min(x,y);
        cout<<"0 0 "<<len<<" "<<len<<endl;
        cout<<"0 "<<len<<" "<<len<<" 0"<<endl;

    }
}