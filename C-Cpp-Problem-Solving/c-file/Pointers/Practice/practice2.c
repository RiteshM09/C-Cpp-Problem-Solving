// array and string 
#include<stdio.h>
#include<string.h>
int length(char *p);
int main()
{
    int l;
    char str[10];

    printf("Enter string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';

    l=length(str);
    printf(" lenght: %d",l);
    return 0;
}

int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}

// *p     - a[0];
// *(p+i) - a[i];

// p - &a
// p+1 - &a[1]
// p+i - &a[i]