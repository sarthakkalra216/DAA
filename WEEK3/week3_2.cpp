#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,comp=0,swaps=0,minn;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {  
             minn=i;
            for(int j=i+1;j<n;j++)
            {
              comp++;
                if(arr[j]<arr[minn])
                {
                 
                 minn=j;
                }
            }
            swap(arr[i],arr[minn]);
            swaps++;
        }
          for(int i=0;i<n;i++)
        {
             cout<<arr[i]<<" ";    
           
        }
      cout<<endl;
        cout<<"Comparision= "<<comp<<" Swaps= "<<swaps<<endl;
      
    }
   
}