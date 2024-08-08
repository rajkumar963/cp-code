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

