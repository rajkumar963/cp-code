// Problem Generator
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a;
            cin>>a;
        unordered_map <char,int> mp;
        for(char p:a){
            mp[p]++;
        }
        int cot=0;
        for(char level='A';level<='G';level++){
            int req=m;
            if(mp.count(level)){
                req-=mp[level];
            }
            cot+=max(0,req);
        }
        

        cout<<cot<<endl;
      
    }

}