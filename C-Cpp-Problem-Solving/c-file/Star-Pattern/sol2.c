/*
****    i=1  j=5        j>=i 
 ***    i=2  j=2-5      j>=i
  **    i=3  j=3-5      j>=i
   *    i=4  j=5        j>=i

*/

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){ 
            if(j>=i)
                printf("*");
            else   
                printf(" ");
                
        }
        printf("\n");
    }
    return 0;
}


// ****
// _***
// __**
// ___*
