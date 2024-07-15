//LLPS
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     reverse(s.begin(),s.end());
//     string ans;
//     for(int i=0;i<s.length();i++){
//         if(s[0]==s[i+1]){
//             ans.pop_back();
//         }else{
//             break;
//         }
//     }
//     cout<<ans<<endl;
    
// }

//LLPS
// #include<bits/stdc++.h>
// using namespace std;
 
// int main() {
//     string s;
//     cin >> s;
 
//     // Sort the string in descending order
//     sort(s.begin(), s.end(), greater<char>());
 
//     string ans = "";
//     ans += s[0];
 
//     for (int i = 1; i < s.length(); i++) {
//         if (s[i] == s[i-1]) {
//             ans += s[i];
//         } else {
//             break;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// Chat order
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     list<string> chat;
//      unordered_set<string> st;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//     if (st.find(s) != st.end()) {
//         chat.remove(s);
//         }
//         chat.push_front(s);
//         st.insert(s); 
//     }
     //for(const auto &s:chat){
//         cout<<s<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    list<string> chat;
     unordered_set<string> st;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
 
        if (st.find(s) != st.end()) {
            chat.remove(s);
        }
        chat.push_front(s);
        st.insert(s); 
    }
     
    for(const auto &s:chat){
        cout<<s<<endl;
    }
 
}