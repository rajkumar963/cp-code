#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else{
            count=0;
        }
    }
   cout<<count<<endl;
    return 0;
}