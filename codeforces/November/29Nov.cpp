//Shohag Loves Mod
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n){
    vector<int>seq;
    seq.push_back(2);
    int cnt=1;
    for(int i=2;i<=n;i++){
        int sum=cnt+i;
        seq.push_back(sum);
        cnt++;
        
    }
    return seq;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res=solve(n);
        for(auto i:res)
        {cout<<i<<" ";}
        cout<<endl;
    }
}