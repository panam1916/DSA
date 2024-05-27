#include<iostream>
using namespace std;

int index(int target,int a[],int n)
{
    int ans=n;
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
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
    int get=index(target,a,n);
    cout<<get;
}

