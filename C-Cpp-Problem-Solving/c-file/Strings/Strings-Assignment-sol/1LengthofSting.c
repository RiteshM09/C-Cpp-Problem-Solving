// Write a program to calculate the length of the string.
// (without using builtin method)
#include<stdio.h>
int main()
{
               
    char str[20]; 
    int i;
    
    printf("Enter name: ");
    fgets(str,20,stdin); // input using fgets with newline character,
    // ritesh(enter)

    for(i=0;str[i];i++){ // loop frm i=0 to i = n-1, and after '\n' or '\0' (null)
        if(str[i]=='\n'){ // if new line occures - then assign the index to null
            str[i]='\0';
            break;
        }
         
    }

    printf("\nlength of string : %d",i);
    printf("\n");
    return 0;
}
