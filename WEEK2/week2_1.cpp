// Given a sorted array of positive integers containing few duplicate elements, design an algorithm 
// and implement it using a program to find whether the given key element is present in the array or 
// not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
// Input format: The first line contains number of test cases, T. For each test case, there will be three 
// input lines. First line contains n (the size of array). Second line contains space-separated integers 
// describing array. Third line contains the key element that need to be searched in the array.
// Output format: The output will have T number of lines. For each test case T, output will be the key 
// element and its number of copies in the array if the key element is present in the array otherwise 
// print “ Key not present”. 
#include<bits/stdc++.h>
using namespace std;
void helper (int arr[],int low ,int high,int target)
{
    int start=-1,end=-1,temp,temp1,ans,mid;
    bool flag=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==target)
        {
            temp=mid;
            temp1=mid;
            while(mid>0 && arr[temp]==target)
            temp--;
            start=temp; 
            while(mid<high && arr[temp1+1]==target)
            temp1++;
            end=temp1;
            flag=true;
            ans=end-start;
            break;

        }
        else if(arr[mid]>target)
        high=mid-1;
        else 
        low =mid+1;
    
    }
    if(flag)
         cout<<endl<<arr[mid]<<"-"<<ans<<endl;
        else
            cout<<"key not present..."<<endl;   

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int size,key;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        helper(arr,0,size-1,key);

    }
    return 0;
}