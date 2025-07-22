// Write a program to convert a given string into uppercase
// NOTE : the differnce in ASCII of A with a and so on till Z with z is 
// A - 65, a - 97 (difference - 32) 
// input:  ritesh
// output: RITESH
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("enter a string : ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z') // check only with lowecase letter
        {
            str[i]=str[i]-32; 
        }

    printf("%s",str);
            

    printf("\n");
    return 0;
}
