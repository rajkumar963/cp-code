// Watermelon
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int w;
//      cin>>w;
//     if(w%2==0 && w>2){
//        cout<<"YES"<<endl;
//      }else{
//          cout<<"NO"<<endl;
//      }
//  }

// Way Too Long Words
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      while(n--){
//       string s;
//      cin>>s;
//      if(s.length()>10){
//          cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
//      }else{
//          cout<<s<<endl;
//      }
//  }
//  }

// Team
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a, b, c, count = 0;
//     while (n--)
//     {
//         cin >> a >> b >> c;
//         if (a + b + c >= 2)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// Bit++
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string bit;
//     int x = 0;
//     while (n--)
//     {
//         cin >> bit;
//         if (bit == "x++" || bit == "++x")
//         {
//             x = x + 1;
//         }
//         else if (bit == "x--" || bit == "--x")
//         {
//             x = x - 1;
//         }
//     }
//     cout << x << endl;
// }

// Next Round
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n,k;
//      cin>>n>>k;
//      int count=0;
//      int a[n];
//      for(int i=0;i<n;i++){
//          cin>>a[i];
//      }
//      for(int i=0;i<n;i++){
//          if(a[i]>=a[k-1] && a[i]>0){
//              count++;
//          }else {
//              break;
//          }
//      }
//      cout<<count<<endl;
//  }

// Domino piling
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int m, n;
//      cin>>m>>n;
//      cout<<m*n/2<<endl;
//  }

// Petya and Strings
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      string s1, s2;
//      cin>>s1>>s2;
//      for(int i=0;i<s1.length();i++){
//          s1[i]=tolower(s1[i]);
//          s2[i]=tolower(s2[i]);
//      }
//      if(s1==s2){
//          cout<<"0"<<endl;
//      }else if(s1<s2){
//          cout<<"-1"<<endl;
//      }else{
//          cout<<"1"<<endl;
//      }
//  }

// Helpful Maths
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      string s;
//      cin>>s;
//          vector<int> n;
//          for (int i = 0; i < s.length(); i += 2) {
//          n.push_back(s[i]-'0' );
//      }
//     sort(n.begin(),n.end());
//     cout<<n[0];
//     for(int i=1;i<n.size();i++){
//        cout<<"+"<<n[i];
//         }
// }

// Boy or Girl
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      string s;
//      cin>>s;
//      set <char> st;
//      for(int i=0;i<s.length();i++){
//          st.insert(s[i]);
//      }
//      if(st.size()%2==0){
//          cout<<"CHAT WITH HER!"<<endl;
//      }else{
//          cout<<"IGNORE HIM!"<<endl;
//      }
//  }

// Bear and Big Brother
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int a,b;
//      cin>>a>>b;
//     int count=1;
//     while(a<=b){
//         a=a*3;
//         b=b*2;
//      if(a<=b){
//          count++;
//      }
//     }
//  cout<<count<<endl;
//  }

// Elephant
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int x;
//      cin>>x;
//      int count=0;
//      while(x>0){
//          if(x>=5){
//              x=x-5;
//              count++;
//          }else if(x>=4){
//              x=x-4;
//              count++;
//          }else if(x>=3){
//              x=x-3;
//              count++;
//          }else if(x>=2){
//              x=x-2;
//              count++;
//          }else if(x>=1){
//              x=x-1;
//              count++;
//          }
//      }
//      cout<<count<<endl;
//  }

// Soldier and Bananas
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int k, n, w;
//      cin>>k>>n>>w;
//      int sum=0;
//      for(int i=1;i<=w;i++){
//          sum=sum+i*k;
//      }
//      if(sum>n){
//          cout<<sum-n<<endl;
//      }else{
//          cout<<"0"<<endl;
//      }
//  }

// Translation
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s, t;
//     cin >> s >> t;
//     string revStr = "";
//     for (int i = t.length() - 1; i >= 0; i--)
//     {
//         revStr += t[i];
//     }
//     if (s == revStr)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// Anton and Danik
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int a=0,b=0;
//     for(int i=0;i<n;i++){
//         if(s[i]=='A'){
//             a++;
//         }else{
//             b++;
//         }
//     }
//     if(a>b){
//         cout<<"Anton"<<endl;
//     }else if(a<b){
//         cout<<"Danik"<<endl;
//     }else{
//         cout<<"Friendship"<<endl;
//     }
// }

// Tram
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int max_capacity = 0;
//     int current_capacity = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         current_capacity = current_capacity - a + b;
//         max_capacity = max(max_capacity, current_capacity);
//     }
//       cout << max_capacity << endl;
//   return 0;
// }

// Recursive Super Digit
//  #include<bits/stdc++.h>
//  using namespace std;
//  int FirstSum(long long n){
//      int sum=0;
//      while(n>0){
//          sum=sum+n%10;
//          n=n/10;
//      }
//      if (sum>9){
//         return FirstSum(sum);
//      }
//      else
//          return sum;
//  }
//  int main(){
//      long long n,k;
//      cin>>n>>k;
//      n=FirstSum(n)*k;
//      cout<<FirstSum(n);
//  }


//Nearly Lucky Number
// #include <iostream>
// #include <string>
// using namespace std;
// int countLuckyDigits(long long n) {
//     int count = 0;
//     while (n > 0) {
//         int digit = n % 10;
//         if (digit == 4 || digit == 7) {
//             count++;
//         }
//         n /= 10;
//     }
//     return count;
// }
// bool isLucky(int n) {
//     return n == 4 || n == 7;
// }
// int main() {
//     long long n;
//     cin >> n;
//  int luckyCount = countLuckyDigits(n);
//     if (isLucky(luckyCount)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


//Wrong Subtraction
// #include <iostream>
// using namespace std;
// int main() {
//     int n, k;
//     cin >> n >> k;
//      for (int i = 0; i < k; i++) {
//         if (n % 10 != 0) {
//             n--;
//         } else {
//             n /= 10;
//         }
//     }
//     cout << n << endl;
//    return 0;
// }

