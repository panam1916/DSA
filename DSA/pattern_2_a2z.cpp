#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++)
    {

        int turn=i;
        for(int j=0;j<turn;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n*2-k;j++)
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

