#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool ones=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
        if(i%2==0 && ones)
        {
            if(j%2==0) cout<<"1";
            else cout<<"0";
        }
        else{
            if(j%2!=0) cout<<"1";
            else cout<<"0";
        }
        }
        ones=!ones;
        cout<<endl;
    }
}
