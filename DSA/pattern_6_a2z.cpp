#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int turn=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=turn;j<n*2;j++) cout<<" ";
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        turn+=2;
        cout<<endl;
    }
}
