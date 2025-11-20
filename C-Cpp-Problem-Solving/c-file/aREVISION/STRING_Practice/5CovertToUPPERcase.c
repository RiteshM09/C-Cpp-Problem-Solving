#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("ENTER STRING: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    // HELLO World
    int i=0;
    while(str[i]){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

        i++;
    }

    printf("UPPERCASE string  : %s",str);
    return 0;
}