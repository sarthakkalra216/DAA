// #include<iostream>
// using namespace std;
// int main()
// {   
//     int x;
//     cin >> x;
//     while(x--)
//     {
//         int n,j;
//         cin>>n;
//         int arr[n];
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
        
//     }

// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   while(x--)
   {
         int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int target,count=0;
    cin>>target;
    sort(arr,arr+n);
  
   for(int i=0;i<n;i++)
   {
     int  l=i;
      int h=n-1;
       
       while(l<h)
       {
          if(arr[h]-arr[l]==target) {
              count++;
              l++;
              h--;
          }
          else if(arr[h]-arr[l]>target) h--;
          else l++;
       }
       
   }
    cout<<count<<endl;
   }
  
    
}