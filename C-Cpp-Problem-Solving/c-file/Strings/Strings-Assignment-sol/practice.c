#include<stdio.h>
#include<string.h>
int main()
{
                // 0   1   2   3   4   5   0  0  0  0
    char str[20];// string array 
    int i;
    printf("Enter name: ");
    fgets(str,20,stdin);

    printf("%s ",str);
    // str[strlen(str)-1]='\0';

    // for(i=0;str[i];i++);

    // printf("\nlength of string : %d",i);
    printf("\n");
    return 0;
}
