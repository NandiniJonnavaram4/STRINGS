#include<stdio.h>
#include<string.h>
int isVowel(char p)
{
        if(strchr("aeiouAEIOU",p))
                return 1;
        else
                return 0;
}
int main()
{
        char str[100];
        fgets(str,100,stdin);
        if(str[strlen(str)-1]=='\n')
                str[strlen(str)-1]='\0';
        int i=0,flag=0;
        while(str[i])
        {
                if(isVowel(str[i]) && isVowel(str[i+1]))
                {
                        str[i]='*';
                        str[i+1]='*';
                        flag=1;
                        i+=2;
                }
                else
                {
                        i++;
                }
        }
        if(flag)
        {
                printf("%s",str);
        }
        else
        {
                printf("No pair of vowels to hide:\n");
        }

}
