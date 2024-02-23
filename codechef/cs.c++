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



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,count=0;
	while(t--){
	    cin>>n;
	    int d[n];
	    for(int i=0;i<n;i++){
	        cin>>d[i];
	    }
		for(int i=0;i<n;i++){
			 if(d[i]>=1000){
	         count=count+1;
			 }else
			 {
			 count=0;
			 }

	    }
	    if(count>0)
	    cout<<count<<endl;
	    else
	    cout<<"0"<<endl;
	}
}
