#include<iostream>
using namespace std;


int main()
{
    string str;
    cout<<"enter IP address:";
    int number=0;
    cin>>str;


    for(int i=0;str[i]!='.';i++)
    {
        number=(str[i]-'0')+number*10;
    }
        if(number>-1 && number<128)
       cout<<"Class A";
    else if(number>127 && number<192)
        cout<<"Class B";
    else if(number>191 && number<224)
       cout<<"Class C";
    else if(number>223 && number<240)
       cout<<"Class D";
    else if(number>239 && number<256)
       cout<<"Class E";
    else
        cout<<"Invalid";

}

