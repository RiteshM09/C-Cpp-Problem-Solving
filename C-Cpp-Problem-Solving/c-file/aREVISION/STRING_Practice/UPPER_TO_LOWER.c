// upper case to lower case
// i/p ABC
// o/p abc
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("UPPER CASE:");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(int i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    printf("\nlower case : %s",str);
    return 0;
}