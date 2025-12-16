// Define a function to input variable length string
// and store it in an array without memory wastage.
/*
Input:  Enter a string: hello world
Output: 
You entered: hello world

.... 

Input: Enter a string: programming in c

Output:
You entered: programming in c
....

Input: Enter a string:"   "  

Output:
You entered:"  "

*/
// take input into temporary buffer
// find length of input
// allocate memory of length + 1
// copy input into allocated memory
// print string
// free memory
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* InputString(void);
int main()
{
    char *ptr = InputString();

    if(ptr != NULL){
        printf("\n You have entered : %s\n",ptr);
        free(ptr);      // NO memory leak
    }
    
}
char* InputString(void)
{
    char *ptr, temp[1000];
    int len;
    
    printf("Enter a string: ");
    fgets(temp, sizeof(temp), stdin);// hello = 01234\n\0

    
      // remove newline if present
    temp[strcspn(temp,"\n")]='\0';  // hello = 01234\0
    
    len = strlen(temp);//length of temprary buffer // len = 5
     
    // allocate exact required memory (+1 for '\0')

    ptr = (char*)malloc(sizeof(len+1));// len = 5+1

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    strcpy(ptr, temp);  // copy into exact-sized memory

    return ptr;   
}   