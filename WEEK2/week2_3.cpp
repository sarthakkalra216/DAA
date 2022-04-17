#include <iostream>
#include <algorithm>
using namespace std;
  
/* Returns count of pairs with difference k in arr[] of size n. */
int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n);  // Sort array elements
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else // arr[r] - arr[l] < sum
              r++;
    }  
    return count;
}
 
// Driver program to test above function
int main()
{
   int x,k,count;
   cin>>x;
   while(x--)
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
    count=countPairsWithDiffK(arr,n,k);
    cout<<count;
   }
}