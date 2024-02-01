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
    //for(int i=0;i<n;i++)
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



