// Given an array of nonnegative integers, design a linear algorithm and implement it using a 
// program to find whether given key element is present in the array or not. Also, find total number 
// of comparisons for each input case. (Time Complexity = O(n), where n is the size of input) Sample 

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n;

        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int num;
        cin >>num;
        int comparison=0, flag=0;
        for(int i=0;i<n;i++)
        {
            comparison++;
            if(num==arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"Present "<<comparison<<endl;
        else
        cout<<"Not Present "<<comparison<<endl;
    }
    return 0;
}