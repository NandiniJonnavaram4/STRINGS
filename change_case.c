#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int flag=0;
    fge
    ts(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            flag=1;
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            flag=1;
            str[i]+=32;
        }
    }
    if(flag)
    {
        printf("%s",str);
    }
    else
    {
        printf("ERROR");
    }
}
