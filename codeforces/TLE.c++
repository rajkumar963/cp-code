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


//Bit++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string bit;
    int x=0;
    while(n--){
        cin>>bit;
        if(bit=="x++" || bit=="++x"){
            x=x+1;
        }else if(bit=="x--" || bit=="--x"){
            x=x-1;
        }
   
}
 cout<<x<<endl;
}