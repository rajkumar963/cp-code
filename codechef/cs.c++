// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
    //     while (t--) {
//         int n;
//         cin >> n;
        //         int max_people, min_people;
//         if (n == 1 || n == 2 || n == 3) {
//             max_people = 1;
//             min_people = 1;
//         } else {
// 			            max_people = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
//             min_people = 1;
//         }
        //         cout << max_people << " " << min_people << endl;
//     }
    //     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
// 	int T;
// 	cin>>T;
// 	int n;
// 	for(int i=1;i<=T;i++)
// 	{
// 	    cin>>n;
// 	    if(n%2!=0) {
// 	        int s=(n+1)/2;
//     	   cout<<s<<" "<<n/2<<endl;
//     	    }else
//     	    {
//     	        cout<<n/2<<" "<<n/2<<endl;
//     	    }
// 			}
// 			}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	int x,y,z;
// 	for(int i=1;i<=t;i++){
// 	    cin>>x>>y>>z;
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
//int main() {
// 	int t;
// 	cin>>t;
// 	int x;
// 	for(int i=1;i<=t;i++){
// 	    cin>>x;
// 	    if(x<=100){
// 	        cout<<x<<endl;
// 	    }
// 	    if(x>100 && x<=1000){
// 	        cout<<x-25<<endl;
// 	    }
// 	    if(x>1000 && x<5000){
// 	        cout<<x-100<<endl;
// 	    }
// 	    if(x>5000){
// 	        cout<<x-500<<endl;
// 	    }
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//      int n;
//      while(t--){
//         cin>>n;
// 		 int s[n];
//         for(int i=0;i<n;i++){
// 			cin>>s[i];
// 		}
//           bool check = true;
// 		 for(int i=0;i<n;i++){
// 			if(s[i]<=4){
// 				check = false;
// 				break;
// 			}
// 		 }	
//        if(check){
// 			cout<<"YES"<<endl;}
// 		else{
// 			cout<<"NO"<<endl;
// 		}
    // }
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	int n,count=0;
// 	while(t--){
// 	    cin>>n;
// 	    int d[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>d[i];
// 	    }
// 		for(int i=0;i<n;i++){
// 			 if(d[i]>=1000){
// 	         count=count+1;
// 			 }else
// 			 {
// 			 count=0;
// 			 }
// 	    }
// 	    if(count>0)
// 	    cout<<count<<endl;
// 	    else
// 	    cout<<"0"<<endl;
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int x,a,d;
// 	cin>>x;
// 	 a=x%10;
// 	x/=10;
// 	d=x%10;
//     cout<<"k"<<d<<a;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	int n;
// 	while(t--){
// 	    cin>>n;
// 	   int rev=0;
// 		while(n>0){
// 			rev=rev*10+n%10;
// 			n=n/10;
// 		}
// 		cout<<rev<<endl;
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,x;
// 	int a ,count=0;
// 	    cin>>n>>x;
// 	    for(int i=1;i<=n;i++)
// 	    {
// 	        cin>>a;
// 	       if(a>=x)
//     	   count=count+1;  
//      	}
// 	    cout<<count<<endl;
//  	}
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int x[n];
//     int max=x[1];
//     while(n--){
// 	for(int i=1;i<=3;i++){
// 	    cin>>x[i];
//         if(x[i]%2==0){
           //             max=x[i];
            //     }}
//      cout<<max<<endl;
//     	}
//     }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
//    cin>>t;
//    int a,b,c;
//    while(t--){
//        cin>>a>>b>>c;
//        if(a>b && a>c)
//        cout<<"Alice"<<endl;
//        if(b>c && b>a)
//         cout<<"Bob"<<endl;
//        if(c>b && a<c)
      //      cout<<"Charlie"<<endl;
//    }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
	// 	int x;
//     float y;
//     cin>>x;
// 	cin>>y;
// 	if(x<y && x%5==0){
// 	    y=y-x-0.5;
// 	}
//   printf("%f",y);
// 	}
	

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
//    cin>>t;
//    int a,b,c;
//    while(t--){
//        cin>>a>>b>>c;
//        if(a<b && b<c)
//        cout<<"STAIR"<<endl;
//       else if(b>c && b>a)
//         cout<<"PEAK"<<endl;
//      else
//       cout<<"NONE"<<endl;
//      }}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
//    cin>>t;
//    int n;
//    while(t--){
//        cin>>n;
//        for(int i=1;i<=n;i++){
//         cout<<"##"<<endl;;
//         for(int i=1;i<=n;i++){
//         cout<<"..";
//         break;
    
//        }
    
//        }
//      }}


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         for (int i = 0; i < 2 * n; i++) {
//             for (int j = 0; j < 2 * n; j++) {
//                 if ((i + j) % 2 == 0) {
//                     cout << "##";
//                 } else {
//                     cout << "..";
//                 }
//             }
//             cout << endl;
//         }
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         for (int i = 0; i < 2 * n; ++i) {
//             for (int j = 0; j < 2 * n; ++j) {
//                 if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
//                     cout << "#";
//                 } else {
//                     cout << ".";
//                 }
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int mx = 0;
	    for(int i = 1; i <= n; i++){
	        int s,r;
	        cin >> s >> r;
	        if(s <= x) mx = max(mx,r);
	    }
	    cout << mx << endl;
	}
}