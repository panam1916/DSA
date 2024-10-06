#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char C='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<char(C+j)<<" ";
        }
        cout<<endl;
    }
}
