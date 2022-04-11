#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    int key,comp=-1,shift=-1;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        shift++;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            comp++;
            shift++;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"Comparision = "<<comp<<endl<<" shift = "<<shift<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        insertionSort(arr,n);
        
    }
    return 0;
}
