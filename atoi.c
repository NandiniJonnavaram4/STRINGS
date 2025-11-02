#include<stdio.h>
#include<string.h>
int main()
{
        char ch[50];
        fgets(ch,50,stdin);
        if(ch[strlen(ch)-1]=='\n')
                ch[strlen(ch)-1]='\0';
        int i=0,num=0;
        while(ch[i]>='0' && ch[i]<='9')
        {

                num=num*10+(ch[i]-'0');
                i++;
        }
        if(ch[i]=='\0')
        {
                printf("%d",num);
        }
        else
        {
                printf("Invalid:\n");
        }
}
