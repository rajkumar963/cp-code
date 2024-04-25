// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    double sum=0,avg,p;
//    cin>>n;
//   if(n>=1 && n<=100)
//   {
//   for(int i=0;i<n;i++)
//   {
//     cin>>p;
//   if(p>=0 && p<=100)
//   {
//      sum=sum+p;  
//   }
//   }
// }
// avg=sum/n;
// printf("%.12lf",avg);
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// int k,l,m,n,d;
// int count=0;
// if(1<=(k,l,m,n)<=10)
// {
//   cin>>k>>l>>m>>n;
// }
// cin>>d;
// for(int i=1;i<=d;i++)
// {
//     if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
//     {
//         count=count+1;
//     }
// }
// cout<<count;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,count=0;
//     cin>>n;
//     int a[n];
//     if(n>=1 && n<=1000)
//     {
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     }
//     int max=a[0];
//     int min=a[0];
//     for(int i=1;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             count+=1;
//             max=a[i];
//         }
//         else if(a[i]<min){
//             count+=1;
//             min=a[i];
//         }
//     }
//     cout<<count;
// }



// #include<iostream>
// using namespace std;
// void primeFactorization(int n)
// {
//     int primefact[n];
//     int i, index=0;
//     while(n%2==0)
//      {
//        primefact[index]=2;
//        index++;
//        n=n/2;
//      }
//     for(int i=3;i*i<=n;i+=2)
//     {
//         while(n%i==0)
//         {
//             primefact[index++]=i;
//             n=n/i;
//         }
//     }
//     if(n>2)
//     {
//         primefact[index++]=n;
//     }
//      for(int i=0;i<index;i++)
//      {
//         cout<<primefact[i];
//         if(i !=index-1){
//         cout<<"*";
//         }
//      }
// } 
// int main()
// {
//     int n;
//     cin>>n;
//     primeFactorization(n);
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      if(n%2==1){
//         cout<<"-1"<<endl;
//      }
//      else{
//         for(int i=1;i<=n;i+=2){
//         cout<<i+1<<" "<<i<<" ";
//         }
//      cout<<endl;
//      }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,a[100],i;
//     cin>>n;
//     int max_index=0;
//     int min_index=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(a[max_index]<a[i])
//         {
//             max_index=i;
//         }
//         if(a[min_index]>=a[i])
//         {
//             min_index=i;
//         }
//     }
//    int swap=max_index+(n-1-min_index);
//    if (max_index>min_index)
//    {
//     swap--;
//    }
//    cout<<swap;
// }




    //capitalization of word
    // #include <iostream>
    // #include <cctype>
    // using namespace std;
    // int main() {
    //     string word;
    //     cin >> word;
    //     if (!word.empty()) {
    //         word[0] = toupper(word[0]);
    //     }
    //     cout << word << endl;
    //     return 0;
    // }
    

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n,x,a[100];
//   int i;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//   cin>>a[i];
//   }
//   for(int i=1;i<=n;i++){
// //   if(a[i]%2==0){
// //     cout<<"YES"<<endl;
// //   }
//   if ((a[i] & (a[i]-1))){
//     cout<<"YES"<<endl;
//   }else{
//     cout<<"NO"<<endl;
//   }
//   }
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int posible(int n, int a[])
// {
//   for(int i=1;i<=n;i++)
//   {
//     if(a[i]-a[i-1]>1)
//     {
//         cout<<"YES"<<endl;
//     }
//   }
//         cout<<"NO"<<endl;
// }
// int main(){
//   int t,i;
//   cin>>t;
//   int n;
//   for(int i=1;i<=t;t--){
//       cin>>n;
//       int a[n];
//       for(int j=0;j<n;j++){
//         cin>>a[i];
//       }}
//       int a[n];
//       posible(n,a);
  // return 0;

// }

// #include<iostream>
// using namespace std;
// void possible(int n, int a[]) {
//     for(int i = 1; i < n; i++) {
//         if(a[i] - a[i-1] > 1) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// int main() {
//     int t,n;
//     cin >> t;
    //     while(t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         // possible(n, a);
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int n,x,y;
//     while(t--){
//         cin>>n;
//         int arr1[2*n],arr2[2*n];
//         for(int j=1;j<=2*n;j++){
//             cin>>arr1[j]>>arr2[j];
//             }
//                  for(int i=1;i<=n;i++){
        
//         if(arr1[x]==arr2[y]){
//           min1=arr1[x];
//         }
//         if(arr1[x]<arr2[y]){
//              min2=arr1[x];
//         }else{
//              min2=arr2[y];
//         }
        
//     }
//     cout<<min1+min2<<endl;

//         }
     
// }


// #include <iostream>
// #include <algorithm> 

// using namespace std;

// int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        int arr1[n], arr2[n];
//        for(int i = 0; i < 2 * n; i++) {
//            if(i % 2 == 0)
//                cin >> arr1[i / 2];
//            else
//                cin >> arr2[i / 2];
//        }
//        int sum = 0;
//        for(int i = 0; i < n; i++) {
//            sum += min(arr1[i], arr2[i]);
//        }
//        cout << sum << endl;
//    }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       char s[100];
//       cin>>s;
//       int count1=0,count2=0;
//       for(int i=0;s[i]!='\0';i++){
//           if(s[i]=='A'){
//               count1++;
//           }else{
//               count2++;
//           }
//       }
//         if(count1>count2){
//             cout<<"A"<<endl;
//         }else{
//             cout<<"B"<<endl;
//         }
        
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,sum=0;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//            sum=sum+i%10; 
//            i/=10;
//         }
//         cout<<sum<<endl;
//     }
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, X, Y;
//         cin >> N >> X >> Y;

//         vector<int> difficulties(N);
//         for (int i = 0; i < N; i++) {
//             cin >> difficulties[i];
//         }

//         // Sort difficulties in descending order
//         sort(difficulties.begin(), difficulties.end(), greater<int>());

//         int cost = 0;
//         for (int difficulty : difficulties) {
//             // If using a Master Pekóball is cheaper, use it
//             if (Y < X * difficulty) {
//                 cost += Y;
//             } else {
//                 cost += X * difficulty;
//             }
//         }

//         cout << cost << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,x,y;
	while(t--){
	   cin>>n>>x>>y;
         vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(), arr.end(), greater<int>());

        int cost = 0;
        for (int diff : arr) {

            if (y < x * diff) {
                cost += y;
            } else {
                cost += x * diff;
            }
        }

        cout << cost << endl;
	    
	}

}