#include<bits/stdc++.h>
using namespace std;


//BINARY SEARCH LOWER_BOUND APPROACH
int binary_serach(int low,int high,float target,float a[],int n)
{
    int ans=n;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int main()
{
    cout<<"enter number of students:";
    int n;
    float target;
    cin>>n;
    float a[n];
	cout<<"enter students height";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	//bubblesort(a,n);
	sort(a,a+n);
    cout<<"enter target of height";
    cin>>target;
    int check=0;
    check=binary_serach(0,n-1,target,a,n);

	if(check!=0){
	cout<<"the number of student we can use:"<<endl;
    cout<<n-check;
	}
	else
	{
		cout<<"no student of this height exists";
	}
}
