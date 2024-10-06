#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int turn=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-(i-1);j++) cout<<"*";
        for(int j=1;j<=turn*2;j++) cout<<" ";
        for(int j=1;j<=n-(i-1);j++) cout<<"*";
        turn+=1;
        cout<<endl;
    }
    turn=n*2-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) cout<<"*";
         for(int j=1;j<=turn;j++) cout<<" ";
         for(int j=1;j<=i;j++) cout<<"*";
         turn-=2;
         cout<<endl;
    }
}
