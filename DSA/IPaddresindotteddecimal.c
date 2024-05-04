#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter IP id:\n");
    int number=0;
    scanf("%s",str);
     int length = strlen(str);

    for(int i=0;str[i]!='.';i++)
    {
        number=(str[i]-'0')+number*10;
    }
        if(number>-1 && number<128)
        printf("Class A");
    else if(number>127 && number<192)
        printf("Class B");
    else if(number>191 && number<224)
        printf("Class C");
    else if(number>223 && number<240)
        printf("Class D");
    else if(number>239 && number<256)
        printf("Class E");
    else
        printf("Invalid");

}
