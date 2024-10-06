#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char C='A';

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=n-1;j>=i;j--)
        {
            cout<<char(C+cnt)<<" ";
            cnt++;
        }
        cout<<endl;
    }
}
