#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            for(int i=0;i<n;i++) cout<<"*";
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==0 || i==n-1) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}

