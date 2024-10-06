#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    /*for(int i=0;i<n/2;i++)
    {
        int turn=(n/2)-i+1;

        for(int j=0;j<(n/2)-(i+1);j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=(i*2)+1;j++)
        {
            cout<<"*";
        }
         for(int j=0;j<(n/2)-(i+1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    int k=1;
    for(int i=0;i<n/2;i++)
    {
        int turn=i;

        for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-k;j++)
        {
            cout<<"*";
        }
         for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }
        k+=2;
        cout<<endl;
    } */
    for(int i=0;i<n;i++)
    {
        int turn=(n/2)-i+1;

        for(int j=0;j<(n)-(i+1);j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=(i*2)+1;j++)
        {
            cout<<"*";
        }
         for(int j=0;j<(n)-(i+1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    int k=1;
    for(int i=0;i<n;i++)
    {
        int turn=i;

        for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n*2-k;j++)
        {
            cout<<"*";
        }
         for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }
        k+=2;
        cout<<endl;
    }
}
