#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int turn=n*2-2;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++) cout<<"*";
        for(int j=1;j<=turn;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        turn-=2;
        cout<<endl;
    }
    turn=2;
    for(int i=1;i<=n*2;i++) cout<<"*";
    cout<<endl;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=n-1;j>=i;j--) cout<<"*";
        for(int j=1;j<=turn;j++) cout<<" ";
        for(int j=n-1;j>=i;j--) cout<<"*";
        cout<<endl;
        turn+=2;
    }
}
