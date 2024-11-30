//Shohag Loves Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        string p="-1";
        bool found=false;
        for(int i=0;i<n-1&& !found;i++){
         if (s[i]==s[i+1]){
             p=s.substr(i,2);
             found=true;
         }
        }
        if(!found){
            for(int j=0;j<n-2 && !found;j++){
                if(s[j]!=s[j+1] && s[j]!=s[j+2] && s[j+1]!=s[j+2]){
                    p=s.substr(j,3);
                    found=true;
                }
            }
        }
     cout<<p<<endl;
    }
    return 0;
}
