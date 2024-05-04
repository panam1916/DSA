#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int cnt[n];
    int coun=0;
    int sol;
    cin>>sol;
    int sum=0;


    int v=n-1;

    while(sum!=sol && v!=-1)
    {
        if(sum+arr[v]<=sol)
        {
            cnt[v]=arr[v];
            sum=sum+arr[v];
            coun++;
        }
        else{
            v--;
        }

    }

    if(sum!=sol)
    {
        cout<<"invalid";
        }
    else
    {
        for(int i=0;i<coun;i++)
        {
            cout<<cnt[coun]<<" ";
        }
    }
}
