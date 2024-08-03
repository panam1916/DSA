#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;

    int index=-1;

    int low=0;
    int high=n*m-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int row=mid%m;
        int col=mid/m;
        if(arr[row][col]==target)
        {
            index=1;
            cout<<"True";
            break;
        }else if(arr[row][col]<target)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    if(index==-1)cout<<"False";

}
