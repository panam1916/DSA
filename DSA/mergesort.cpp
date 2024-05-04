#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


void rev(int arr[],int s,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i+1]=arr[i];
        arr[i]=temp;
        }
    }
}
void merge_sort(int arr[],int s,int mid,int n)
{

    int left=mid-s+1;
    int right=n-mid;
    int l[left+1];
    int r[right+1];
    for(int i=0;i<left;i++)
    {
        l[i]=arr[s+i-1];
    }
     for(int j=0;j<right;j++)
    {
        r[j]=arr[mid+j];
    }
    l[left+1]=9999;
    r[right+1]=99999;
    int i=1,j=1;
    int k;
    for(k=s;k<n;k++)
    {
        if(l[i]<=r[j])
        {
            arr[k]=l[i];
            i++;
        }
        else
        {
            arr[k]=r[j];
            j++;
        }
    }


}

void mergesort(int arr[],int s,int n){

    if(s<n){
    int mid=(s+n)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,n);
    merge_sort(arr,s,mid,n);
    }


}


int main()
{
    clock_t start,ending;
    int s=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //start=clock();
    mergesort(arr,s,n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //ending=clock();
    //double t1=double(ending-start)/CLOCKS_PER_SEC;
    /*start=0;
    ending=0;
    start=clock();
    mergesort(arr,s,n);
    ending=clock();
    double t2=double(ending-start)/CLOCKS_PER_SEC;
    rev(arr,s,n);
    start=0;
    ending=0;
    start=clock();
    mergesort(arr,s,n);
    ending=clock();
    double t3=double(ending-start)/CLOCKS_PER_SEC;

    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } */


}
