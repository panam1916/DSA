#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



void rev(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
}
int quick_sort(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=high) i++;
        while(arr[j]>pivot && j>=low) j--;

        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;

}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot_index=quick_sort(arr,low,high);
        quicksort(arr,low,pivot_index-1);
        quicksort(arr,pivot_index+1,high);

    }
}
int main()
{
    clock_t start,ending;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        //cin>>arr[i];
        arr[i]=(rand()%10000000);
    }
    start=clock();
    quicksort(arr,0,n-1);
    ending=clock();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"avarage time ="<<double(ending-start)/CLOCKS_PER_SEC<<endl;
    start=clock();
    quicksort(arr,0,n-1);
    ending=clock();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"best time ="<<double(ending-start)/CLOCKS_PER_SEC<<endl;

    rev(arr,n);
    start=clock();
    quicksort(arr,0,n-1);
    ending=clock();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"worst time ="<<double(ending-start)/CLOCKS_PER_SEC<<endl;
}
