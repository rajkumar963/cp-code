// 1. Write a recursive function to calculate the factorial of a number.
//  #include<iostream>
//  using namespace std;
//  int fact(int n){
//      if(n==0){
//          return 1;
//      }
//      return n*fact(n-1);
//  }
//  int main(){
//      int n;
//      cin>>n;
//     fact(n);
//      cout<<fact(n);
//      return 0;
//  }

// 2. Write a recursive function to print numbers from n to 1.
//  #include<iostream>
//  using namespace std;
//  int print(int n){
//      if(n==0){
//          return 0;
//      }
//      print(n-1);
//      cout<<n<<endl;
//  }
//  int main(){
//      int n;
//      cin>>n;
//      print(n);
//      return 0;
//  }

// 3. Write a recursive function to reverse a string.
//  #include<iostream>
//  using namespace std;
//  int reverse(string str){
//      if(str.length()==0){
//          return 0;
//      }
//      reverse(str.substr(1));
//      cout<<str[0];
//  }
//  int main(){
//      string str;
//      cin>>str;
//      reverse(str);
//  }

// 4. Write a recursive function to find the nth fibonacci number.
//  #include<iostream>
//  using namespace std;
//  int fibonacci(int n){
//      int a=0,b=1,c;
//      // int sum=0;
//      if(n==0){
//          cout<<"0";
//      }
//      if(n==1){
//          cout<<"1";
//      }else{
//          for(int i=1;i<=n;i++){
//          c=a+b;
//          a=b;
//          b=c;
//      }
//       cout<<"fibonacci("<<n<<") = "<<c;
//      }
//  }
//  int main(){
//      int n;
//      cin>>n;
//      fibonacci(n);
//      return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number n:";
    cin >> n;
    int prime = 0, num = 2;
    while (prime < n)
    {
        int is_prime = true;
        int i = 2;
        while (i <= sqrt(num))
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
            i++;
        }
        if (is_prime == true)
        {
            prime++;
            cout << num << " ";
        }
        num++;
    }
}
