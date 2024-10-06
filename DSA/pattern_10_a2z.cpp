#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char C='A';
    int turn=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<i;j++)
        {
            cout<<char(C+j);
        }

        cout<<char(C+i);

        for(int j=i-1;j>=0;j--)
        {
            cout<<char(C+j);
        }
        turn--;
        cout<<endl;
    }
}
