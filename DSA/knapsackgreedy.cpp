#include<bits/stdc++.h>
#include<queue>
using namespace std;

void compare(double r[],int n,int weight[])
{
    for(int i=0;i<n;i++)
    {
        if(r[i]>r[i+1])
        {
            double temp=weight[i];
            weight[i]=weight[i+1];
            weight[i+1]=temp;
        }
    }
}

void compare1(double r[],int n,int value[])
{
    for(int i=0;i<n;i++)
    {
        if(r[i]>r[i+1])
        {
            double temp=value[i];
            value[i]=value[i+1];
            value[i+1]=temp;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int weight[n];
    int value[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }

    double r[n];

    for(int i=0;i<n;i++)
    {
        r[i]=value[i]/weight[i];
    }
     sort(r,r+n);
    compare(r,n,weight);
    compare1(r,n,value);

    int capacity;
    cin>>capacity;

     int current_weight = 0;
    double total_value = 0;

    for (int i =0; i <n ; i++) {

        if (current_weight + weight[i] <= capacity) {
            current_weight += weight[i];
            total_value += value[i];
        } else {

            double remaining_capacity = capacity - current_weight;
            total_value += (remaining_capacity / weight[i]) * value[i];
            break;
        }

    }
            cout<<total_value;

}
