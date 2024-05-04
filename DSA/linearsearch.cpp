#include<iostream>
using namespace std;

int main()
{
    int n,target,ans;
    cin>>n;
    cout<<"enter target";
    cin>>target;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            ans=i;

        }
    }
    cout<<"the position is"<< " "<<ans;
}
