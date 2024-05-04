#include<iostream>
using namespace std;
//time complexity is O(n+m) but m is also take time as n so it is O(n) time taken....

void counting(int arr[],int s,int m)
{
    int c[m+1]={0};
    for(int i=0;i<s;i++)
    {
        c[arr[i]]=c[arr[i]]+1;
    }

    for(int i=1;i<=m;i++)
    {
        c[i]=c[i]+c[i-1];
    }

    int a1[s];
    for(int i=s-1;i>=0;i--)
    {
        //c[arr[i]]=c[arr[i]]-1;
        a1[--c[arr[i]]]=arr[i];
    }
    for(int i=0;i<s;i++) arr[i]=a1[i];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int m=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=m)
            m=arr[i];
    }
    counting(arr,n,m);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


