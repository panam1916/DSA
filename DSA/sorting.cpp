
#include<iostream>
using namespace std;

void selection_sort(int a[],int x)
{
    for(int i=0;i<=x-2;i++)
    {
        int min=i,temp;
        for(int j=i+1;j<=x-1;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,x);
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }


}
