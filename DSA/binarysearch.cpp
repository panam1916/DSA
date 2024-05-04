#include<iostream>
using namespace std;

bool binary(int low,int hifgh,int target,int a[])
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
         return true;
        }
        else if(target<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return false;
}


int main()
{
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter target";
    cin>>target;
    bool check=binary(0,n-1,target,a);
    cout<<check;
}
