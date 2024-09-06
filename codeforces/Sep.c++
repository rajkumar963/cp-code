//Sakurako's Exam
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b;
//         cin >> a >> b;
//         if(a==0 && b%2!=0) {
//             cout << "NO" << endl;
//         }
//          else if(a%2==0 && b%2==0) {
//             cout << "YES" << endl;
//         }else if(a%2==0&&b==0) {
//             cout << "YES" << endl;
//         }else if(a==0&&b%2==0) {
//             cout << "YES" << endl;
//         } else if (a%2==0 && b%2!=0) {
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }        
//     }
//     return 0;
// }


//Longest Good Array
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long l, r;
//         cin >> l >> r;      
//         long long diff = r - l;
//         long long k = (long long)(sqrt(1 + 8 * diff) - 1) / 2;       
//         cout << k + 1 << endl;
//     }
//     return 0;
// }


//Sum
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a+b==c||a+c==b||b+c==a){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

//Candies and Two Sisters
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     long long count=0;
//     while(t--){
//         long long n;
//         cin>>n;
//         long long a=n-1,b=1;
//         for(int i=0;i<n/2;i++){
//              if(a>b)
//                 {
//                 count++;
//                 b++;
//                 a--;
//                 }
//         }
//         cout<<count<<endl;
//     }
// }

//YES or YES?
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         if(s=="YES"||s=="yes"||s=="Yes"||s=="yES"||s=="YeS"||s=="yEs"||s=="yeS"||s=="YEs"){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

//Minimize!
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         cout<<b-a<<endl;
//     }
// }


//B. osu!mania
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;  
//         vector<int> columns(n);
//         for (int i = 0; i < n; i++) {
//             string row;
//             cin >> row;
//             for (int j = 0; j < 4; j++) {
//                 if (row[j] == '#') {
//                     columns[i] = j + 1;  
//                     break;
//                 }
//             }
//         }
//         for (int i = n - 1; i >= 0; i--) {
//             cout << columns[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//cAPS lOCK
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     bool changeCase = true;
//     int len = s.length();
//     for (int i = 1; i < len; ++i) {
//         if (!isupper(s[i])) {
//             changeCase = false;
//             break;
//         }
//     }
//     if (changeCase) {
//         for (int i = 0; i < len; ++i) {
//             if (isupper(s[i]))
//                 s[i] = tolower(s[i]);
//             else
//                 s[i] = toupper(s[i]);
//         }
//     }
//     cout << s << endl;
// }


//Cut Ribbon
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, a, b, c;
//     cin>>n>>a>>b>>c;
//     int count=0;
//     while(n>0){
//         if(n>=a){
//             n=n-a;
//             count++;
//         }
//         else if(n>=b){
//             n=n-b;
//             count++;
//         }
//         else if(n>=c){
//             n=n-c;
//             count++;
//         }
//         else{
//             break;
//         }
//     }   
//     cout<<count<<endl;
//     return 0;
// }


//Calculator
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+'){
        cout<<a+b<<endl;
    }
    else if(c=='-'){
        cout<<a-b<<endl;
    }
    else if(c=='*'){
        cout<<a*b<<endl;
    }
    else{
        cout<<a/b<<endl;
    }
}