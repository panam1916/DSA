#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    clock_t start,ending;
    for(int i=0;i<n;i++)
    {
       // cin>>arr[i];
       arr[i]=rand()%10000000000;
    }

    int min_index,j;

    start=clock();

    for(int i=0;i<n+1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    ending=clock();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<double(ending-start)/CLOCKS_PER_SEC;
}
