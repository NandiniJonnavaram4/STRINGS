#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        fgets(str,100,stdin);
        if(str[strlen(str)-1]=='\n')
                str[strlen(str)-1]='\0';
        char ch;
        int i=0,flag=0,cnt=0;
        scanf("%c",&ch);
        while(str[i])
        {
                if(str[i]==ch)
                {
                        flag=1;
                        cnt++;

                }
                i++;
        }
        if(flag)
        {
                printf("%d",cnt);
        }
        else
        {
                printf("ERROR");
        }
}
