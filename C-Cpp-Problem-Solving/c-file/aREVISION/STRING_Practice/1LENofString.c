// length of string without using inbuit fun
/*
input : hello
output: 5
*/
#include<stdio.h>
int main()
{
    int len,i;
    char str[50];

    printf("ENTER String: ");
    fgets(str,50,stdin);

    for(i=0;str[i];i++){
        if(str[i]=='\n'){
            str[i]='\0';
                break;
        }      
    }

    printf("LENGTH : %d ",i);
}