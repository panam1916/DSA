#include<iostream>
using namespace std;

#define N 100
int s[N];
int top=-1;

void push()
{
    int x;
    cout<<"enter data";
    cin>>x;
    if(top==N-1)
    {
        cout<<"overflow";
    }
    else
    {
        top++;
        s[top]=x;

    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"underflow";
    }
    else
        top--;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
}
int main()
{
    char c;
    int p;
    cin>>p;
    for(int j=0;j<p;j++)
    {
        cin>>c;
        switch(c)
        {
        case'1':
            push();
            break;
        case'2':
            pop();
            break;
        case'3':
            display();
            break;
        default:
            cout<<"invalid input";
        }
    }
}
