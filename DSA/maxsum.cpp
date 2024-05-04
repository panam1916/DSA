#include<bits/stdc++.h>
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
    int maxsum=0;
    int k;
    cin>>k;
    if(n<k)
    {
        cout<<"invalid";
    }
    else
    {
            for(int i=0;i<k;i++)
            {
                maxsum=maxsum+arr[i];
            }
            int currentsum=maxsum;
            for(int i=k;i<n;i++)
            {
                currentsum=currentsum+arr[i]-arr[i-k];
                maxsum=max(currentsum,maxsum);

            }

    }
    cout<<maxsum;
}
