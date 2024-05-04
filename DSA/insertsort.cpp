#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()

{
    int i,temp,j,l,n;
    cin>>l;
    int a[l];

    for(int j=0;j<l;j++)
    {
        cin>>a[j];
    }
    for(int j=1;j<l;j++)
    {
        temp=a[j];
        n=j-1;
        while(n>=0&&a[n]>temp)
        {
            a[n+1]=a[n];
            n--;
        }
        a[n+1]=temp;
    }
        for(int j=0;j<l;j++)
    {
        cout<<a[j]<<" ";
    }
}
