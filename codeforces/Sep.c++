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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     char c;
//     cin>>a>>c>>b;
//     if(c=='+'){
//         cout<<a+b<<endl;
//     }
//     else if(c=='-'){
//         cout<<a-b<<endl;
//     }
//     else if(c=='*'){
//         cout<<a*b<<endl;
//     }
//     else{
//         cout<<a/b<<endl;
//     }
// }


//Puzzles
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int diff=0;
//     vector<int> v(m);
//     for(int i=0;i<m;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     diff=v[n-1]-v[0];
//     for(int i=1;i<=m-n;i++){
//          diff = min(diff, v[i + n - 1] - v[i]);
//     }
//     cout<<diff<<endl;
//     return 0;  
// }

//Three Brothers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     if((a==3 &&b==1)||(a==1 &&b==3)){
//         cout<<2<<endl;
//     }else if((a==3 &&b==2)||(a==2 &&b==3)){
//         cout<<1<<endl;
//     }else if((a==1 &&b==2)||(a==2 &&b==1)){
//         cout<<3<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//         cin >> t;
//         while(t--) {
//             int n;
//             cin >> n;
//             vector<int> a(n);  
//             int res = 0;              
//             for(int i = 0; i < n; i++) {
//                 cin >> a[i];
//             }            
//             for(int i = 0; i < n; i++) {
//                 if(i % 2 == 0) {
//                     res += a[i];  
//                 } else {
//                     res -= a[i];  
//                 }
//             }
//             cout << res << endl;
//         }
//         return 0;
//     }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 5;
//     vector<vector<int>> matrix(n, vector<int>(n)); 
//     for(int i = 0; i < n; i++) {  
//         for(int j = 0; j < n; j++) {
//             cin >> matrix[i][j];  
//         }
//     }
//     int x = 0, y = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(matrix[i][j] == 1) {
//                 x = i;
//                 y = j;
//                 break;
//             }
//         }
//     }
//     cout << abs(x - 2) + abs(y - 2) << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 3;
//     vector<vector<int>> matrix(n, vector<int>(n)); 
//     for(int i = 0; i < n; i++) {  
//         for(int j = 0; j < n; j++) {
//             cin >> matrix[i][j];  
//         }
//     }
//     int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//     vector<vector<int>>res(n, vector<int>(n));

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(matrix[i][j] % 2 == 0){
//                 res[i][j] = 1;
//                 int opr = 0;
//                 while(opr++){
//                     int x = dir[opr][0];
//                     int y = dir[opr][1];
//                     if(x + i >= 0 && x + i < n && y + j >= 0 && y + j < n) {
//                         res[x + i][y + j] = matrix[i][j];
//                     }
//                 }
//             }
//             else{
//                 res[i][j] = 0;
//                 int opr = 0;
//                 while(opr++){
//                     int x = dir[opr][0];
//                     int y = dir[opr][1];
//                     if(x + i >= 0 && x + i < n && y + j >= 0 && y + j < n) {
//                         res[x + i][y + j] = matrix[i][j];
//                     }
//                 }
//             }
//         }

//     }
//     for(int i = 0; i < n; i++) {  
//         for(int j = 0; j < n; j++) {
//             cout << res[i][j];  
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Alternating Sum of Numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         int sum=0;
//         for(int i=0;i<n;i++){
//              cin>>a[i];
//              if(i%2!=0){
//               sum+=a[i];
//              }else{
//               sum-=a[i];
//              }
//         }
//         cout<<-(sum)<<endl;
//     }
// }


//Power Of Two
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     if((n&(n-1))==0){
//         cout<<"YES"<<endl;
//     }else{  
//         cout<<"NO"<<endl;
//     }
// }

//Prime checking
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(long long n){
//     if(n<=1){
//         return false;
//     }
//     for(long long i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     long long n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }/


//. Koko And The Transformation
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> a(n);
//     vector<int> b(m);
//     int sum1=0,sum2=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         sum1=sum1+a[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//         sum2=sum2+b[i];
//     }
//     if(sum1==sum2){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }


// The New Year: Meeting Friends
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if((a>b &&a<c) || (a<b && a>c)) {
//         cout<<(abs(a-b)+abs(a-c))<<endl;
//     }else if((b<a && b>c) || (b>a && b<c)) {
//         cout<<(abs(b-a)+abs(b-c))<<endl;
//     }else if((c>a && c<b) || (c<a && c>b)) {
//         cout<<(abs(c-a)+abs(c-b))<<endl;
//     }
//     return 0;
// }


//fixed password
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//    while(true){
//     cin>>x;
//       if(x==1999)
//    { 
//     cout<<"Correct"<<endl;
//       break;
//    }
//     else
//     {cout<<"Wrong"<<endl;}
   
//    }
// }

//Showering
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s,m;
//         cin>>n>>s>>m;
//         vector<pair<int,int>>intvl(n);
//         for(int i=0;i<n;i++){
//             cin>>intvl[i].first>>intvl[i].second;
//         }
//         bool shower=false;
//         if(intvl[0].first>=s){
//             shower=true;
//         }
//         for(int i=1;i<n;i++){
//             int time=intvl[i].first-intvl[i-1].second;
//             if(time>=s){
//                 shower=true;
//                 break;
//             }
//         }
//         if(m-intvl[n-1].second>=s){
//             shower=true;
//         }
//         if(shower){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
// }




//Simple Palindrome
// #include<bits/stdc++.h>
// using namespace std;
// string palindrome(int n){
//      string vowels = "aeiou";
//     string res = "";
//     for(int i=0;i<n;i++){
//         res+=vowels[i% 5];

//         sort(res.begin(),res.end());
//     }
//     return res;
// }
// int main(){
//     int t;
//     cin>>t;
//     int n;
//     while(t--){
//         cin>>n;
//         cout<<palindrome(n)<<endl;
//     }
// }


//Submission Bait
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.rbegin(),v.rend());
//         int Asum=0,Bsum=0;
//         for(int i=0;i<n;i++){
//             if(i%2==0){
//                 Asum+=v[i];
//             }else{
//                 Bsum+=v[i];
//             }
//         }
//         if(Asum>Bsum){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

















//Hard compare
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if(pow(a,b)>pow(c,d)){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }