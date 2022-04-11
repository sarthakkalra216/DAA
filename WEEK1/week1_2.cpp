// Given an already sorted array of positive integers, design an algorithm and implement it using a 
// program to find whether given key element is present in the array or not. Also, find total number 
// of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).

#include<iostream>
using namespace std;
void binary_s(int arr[],int l,int h,int key)
{
    int comparison=0;
    int flag=0;
    while(l<=h)
    {
        comparison++;
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if(arr[mid]>key)
        h=mid-1;
        else 
        l=mid+1;
        
    }
    if(flag==1)
    cout<<"Present "<<comparison<<endl;
    else 
    cout<<"Not Present "<<comparison<<endl;
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
        binary_s(arr,0,size,key);

    }
    return 0;
}