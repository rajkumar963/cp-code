//A. Hulk
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  if(n==1){
//      cout<<"I hate it"<<endl;
//  }else{
//      cout<<"I hate ";
//         for(int i=2;i<=n;i++){
//             if(i%2==0){
//             cout<<"that I love ";
//         }else{
//             cout<<"that I hate ";
//         }
//         }
//         cout<<"it"<<endl;
//     }
// }

//A. Divisibility Problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b;
//         cin>>a>>b;
//       int x;
//       if(a%b==0){
//           cout<<"0"<<endl;
//       }else{
//       x=a%b;
//        cout<<b-x<<endl;
//     }
//  }
// }


//A. Gravity Flip
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

//A. Say Hello With C++
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     sing s;
//     cin>>s;
//     cout<<"Hello,"<<s;
// }

//A. Winter Sale
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,p;
//     cin>>x>>p;
//     float y=(p*100.0)/(100-x);
//       y = round(y * 100.0) / 100.0;
//      cout << fixed << setprecision(2) << y << endl;
// }

//B. Memo and Momo
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b,k;
//     cin>>a>>b>>k;
//     if(a%k==0 && b%k==0){
//         cout<<"Both";
//     }else if(a%k==0 && b%k!=0){
//         cout<<"Memo";
//     }else if(a%k!=0 && b%k==0){
//         cout<<"Momo";
//     }else{
//         cout<<"No One";
//     }
// }

//A. Expression
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//        int p=a+(b*c);
//         int q=a*(b+c);
//         int r=a*(b*c);
//         int s=(a+b)*c;
//         int max1=max(p,max(q,max(r,s)));
//         int t=a+b+c;
//         cout<<max(t,max1);
// }


//C. Simple Calculator
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long x,y;
//     cin>>x>>y;
//     cout<<x <<" + " <<y <<" = " <<x+y<<endl;
//     cout<<x <<" * " <<y <<" = " <<x*y<<endl;
//     cout<<x <<" - " <<y <<" = " <<x-y<<endl;
// }

//I. Lucky Numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//             count++;
//     }
//     if(count==2)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
// }

//D. Ali Baba and Puzzles
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if((a+b*c==d)||(a*b+c==d)||(a+b-c==d)||(a-b+c==d)||(a*b-c==d)||(a-b*c==d)){   
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// bool canSolve(long long a, long long b, long long c, long long d) {
//     return (a + b - c == d) || (a + b * c == d) || (a - b + c == d) ||
//            (a - b * c == d) || (a * b + c == d) || (a * b - c == d);
// }
// int main() {
//     long long a, b, c, d;
//     cin >> a >> b >> c >> d; 
//     if (canSolve(a, b, c, d)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }  
//     return 0;
//}


//A. A+B Again?
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,sum=0;
//         cin>>n;;
//         sum=n/10+n%10;
//         cout<<sum<<endl;
//     }
// }


// Next Alphabet
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     cin>>c;
//     if(c=='z')
//     cout<<"a";
//     else
//     cout<<char(c+1);
// }

//E. Interval Sweep
// #include <bits/stdc++.h>
// using namespace std;
// string can_form_interval(int a, int b) {
//     if (a + b == 0) {
//         return "NO";
//     }
//     if (abs(a - b) <= 1) {
//         return "YES";
//     }
//     return "NO";
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << can_form_interval(a, b) << endl;
//     return 0;
// }

//A. Legs
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int x=n/4;
//         int y=n%4;
//         cout<<x+y/2<<endl; 
//     }
// }

//G. Katryoshka
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,m,k;
//     cin>>n>>m>>k;
    //     long long res = 0;
//     long long total=min({n,m,k});
//     n-=total;
//     m-=total;
//     k-=total;
//     long long total2=min({n/2,m,k});
//      res+=total;
//     n-=total2*2;
//     res+=min({n/2,k});
//     cout<<res<<endl;
// }

//F. Adding Bits
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b;
//     cin>>a>>b;
//     long long res = a ^ b;
//     cout<<res<<endl;
// }

//Timon and Pumbaa
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b;
//     cin>>a>>b;
//     if(a>b){
//         cout<<a-b<<endl;
//     }else{
//         cout<<0<<endl;
//     }
// }

// Drawing 'X'
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j || i+j==n-1){
//                 cout<<"/";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

//D. Range Sum
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b;
//         cin>>a>>b;
//         long long n = b - a + 1;
//         long long sum = (n * (a + b)) / 2;
//         cout<<sum<<endl;
//    }
// }



//Difference
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a,b,c,d;
//     cin>>a>>b>>c>>d;
//     long long res=(a*b)-(c*d);
//     cout<<"Difference = "<<res<<endl;
// }


// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     double r;
//     cin>>r;
//      cout << fixed << setprecision(9);
//     cout << r*r*3.141592653;
// }

//even numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==1) cout<<-1<<endl;
//     for(int i=2;i<=n;i+=2){
//             cout<<i<<endl;
//     }
// }




//H. Data Type Guessing
// #include<bits/stdc++.h>
// #include <typeinfo>
// using namespace std;
// int main(){
//     int n,k,a;
//     cin>>n>>k>>a;
//     long long res = (n) * k / a;
//    if(){
//     if(res>= -2147483648 && res <= 2147483647){
//         cout<<"int"<<endl;
//     }else{
//         cout<<"long long"<<endl;
//     }
//    }else{
//     cout<<"double"<<endl;
//    }
// }


//A. Hit the Lottery
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//      int sum=n/100;
//      int x=n%100;
//      sum+=x/20;
//      x=x%20;
//      sum+=x/10;
//      x=x%10;
//      sum+=x/5;
//      x=x%5;
//      sum+=x/1;
//     cout<<sum<<endl;
// }


//A. Primary Task
// #include <bits/stdc++.h>
// using namespace std;
// bool isImportant(int num) {
//     string numStr = to_string(num);
//     if (numStr.substr(0, 2) == "10" && numStr.length() > 2) {
//         string powerPart = numStr.substr(2);
//         if (powerPart[0] == '0') {
//             return false;
//         }
//         try {
//             int x = stoi(powerPart);
//             return x >= 2;
//         } catch (const exception&) {
//             return false;
//         }
//     }
//     return false;
// }

// int main() {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int a;
//         cin >> a;
//         cout << (isImportant(a) ? "YES" : "NO") << endl;
//     }  
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// bool isValidSeating(const vector<int>& seats) {
//     int n = seats.size();
//     vector<bool> occupied(n + 1, false);
//     for (int i = 0; i < n; ++i) {
//         int seat = seats[i];
//         if (i == 0) {
//             occupied[seat] = true;
//             continue;
//         }
//         if (!occupied[seat]) {
//             bool hasOccupiedNeighbor = false;
//             if (seat > 1 && occupied[seat - 1]) hasOccupiedNeighbor = true;
//             if (seat < n && occupied[seat + 1]) hasOccupiedNeighbor = true;       
//             if (!hasOccupiedNeighbor) {
//                 for (int j = 1; j <= n; ++j) {
//                     if (!occupied[j]) return false;
//                 }
//             }
//         }     
//         occupied[seat] = true;
//     }  
//     return true;
// }
// int main() {
//     int t;
//     cin >> t;  
//     while (t--) {
//         int n;
//         cin >> n;       
//         vector<int> seats(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> seats[i];
//         }     
//         cout << (isValidSeating(seats) ? "YES" : "NO") << endl;
//     }  
//     return 0;
// }


//Even, Odd, Positive and Negative
// #include <iostream>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     int even = 0, odd = 0, positive = 0, negative = 0;   
//     for (int i = 0; i < N; i++) {
//         int num;
//         cin >> num;       
//         if (num % 2 == 0) {
//             even++;
//         } else {
//             odd++;
//         }      
//         if (num > 0) {
//             positive++;
//         } else if (num < 0) {
//             negative++;
//         }
//     }
//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative << endl;
//     return 0;
// }



// Anton and Letters
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s;
//   getline(cin, s);
//     set<char> s1;
//     for(char c: s){
//         if(isalpha(c)){
//             s1.insert(c);
//         }
//     }
//     cout<<s1.size()<<endl;
//     return 0;
// }

//. Two numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//      double res = static_cast<double>(a) / b;
//     cout<<"floor " <<a<<" / "<< b <<" = "<<floor(res)<<endl;
//     cout<<"ceil " <<a<<" / "<< b <<" = "<<ceil(res)<<endl;
//     cout<<"round " <<a<<" / "<< b <<" = "<<round(res)<<endl;
//     return 0;
// }


//A.Kefa and First Steps
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     long long arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }   
//     int count = 1, maxCount = 1; 
//     for (int i = 1; i < n; i++) {
//         if (arr[i] >= arr[i - 1]) {
//             count++;
//             maxCount = max(maxCount, count);  
//         } else {
//             count = 1; 
//         }
//     }   
//     cout << maxCount << endl;  
//     return 0;
// }

//Z. Three Numbers
// #include <iostream>
// using namespace std;
// int countCombi(int K, int S) {
//     int count = 0;  
//     for (int x = 0; x <= K; x++) {
//         for (int y = 0; y <= K; y++) {
//             int z = S - x - y;
//             if (z >= 0 && z <= K) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main() {
//     int K, S;
//     cin >> K >> S;
//     int result = countCombi(K, S);
//     cout << result << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int sum=0;
//        if(a>b){
//          for(int i=b+1;i<a;i++){
//             if(i%2==1)
//             sum+=i;
//         }
//        }else{
//         for(int i=a+1;i<b;i++){
//             if(i%2==1)
//             sum+=i;
//         }
//        }
//         cout<<sum<<endl;
//     }
// }

//C. Clock and Strings
// #include <bits/stdc++.h>
// using namespace std;
// bool intersects(int a, int b, int c, int d) {
//     if (a > b) swap(a, b); // Make sure a < b
//     if (c > d) swap(c, d); // Make sure c < d
//     return (a < c && c < b && (d > b || d < a)) || (c < a && a < d && (b > d || b < c));
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         if (intersects(a, b, c, d) || intersects(c, d, a, b)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

//A. Dubstep
// #include<bits/stdc++.h>
// using namespace std;
// string remove(const string& s){
//     string res="";
//     int i=0;while(i<s.size()){
//         if(s.substr(i,3)=="WUB"){
//             if (!res.empty()) {
//                 res += " ";
//             }
//             i += 3;
//         }else{
//             res+=s[i];
//             i++;
//         }
//     }
//     return res;
// }
// int main(){
//     string s;
//     cin>>s;
//     string ans=remove(s);
//     cout<<ans<<endl;
// }

//closest point
#include <bits/stdc++.h>
using namespace std; 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 2 && abs(a[1] - a[0]) > 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
