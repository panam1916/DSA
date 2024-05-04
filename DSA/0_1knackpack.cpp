#include<bits/stdc++.h>
using namespace std;

int sub(int n,int w,int wt[],int val[])
{
    if(n==0)
    {
        if(wt[n]<=w) return val[0];
        else
            return 0;
    }
    int nottake=sub(n-1,w,wt,val);
    int take=INT_MIN;
    if(wt[n]<=w)
        take=val[n]+sub(n-1,w-wt[n],wt,val);

    return max(nottake,take);
}
//recursion.....
//same as pick and not pick method.....
//as index ind and bag weight.....
//get maximum between take and not take....
int main()
{
    int n;
    cin>>n;
    int wt[n];
    int val[n];
    int w;
    cin>>w;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    int r=sub(n,w,wt,val);
    cout<<r;
}
