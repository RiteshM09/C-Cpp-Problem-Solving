#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp[50];
    int i,j,len;

    printf("Enter a sting: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    strcpy(temp,str);// copy str to temp for comparing 

    len=strlen(str);// instead of calling strlen in ever iteration of j just store it in len variable
        for(j = len-1,i=0 ; j>=0 ; j--)
        {    
                str[i]=temp[j];
                i++;
        }      
    str[i] = '\0';
    
    printf("\nPRINT %s",str);
    return 0;
}
