#include<iostream>
#include<cmath>

using namespace std;
void jump_s(int arr[],int size ,int key)
{
    int start=0,comp=0,flag=0;
    int end=sqrt(size);
    while(arr[end]<=key && end<size)
    {
        comp++;
        start=end;
        end+=sqrt(size);
        if(end>size-1)
        end=size;
    }
    for(int i=start;i<end;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
     if(flag==1)
    cout<<"Present "<<comp<<endl;
    else 
    cout<<"Not Present "<<comp
    <<endl;
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
        jump_s(arr,size,key);

    }
    return 0;
}