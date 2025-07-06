/*
    *******         i=1, j>=1     j<=7     j>=8-1       j=8-i    
     *****          i=2, j>=2     j<=6     j>=8-2      j=8-i     
      ***           i=3, j>=3     j<=5     j>=8-3      j=8-i             
       *            i=4, j>=4     j<=4     j>=8-4      j=8-4 
*/ 
#include<stdio.h>
int main() 
{  
    int i,j,k=0;

    for(i=1;i<=4;i++){

        for(j=1;j<=8-i;j++){ 

            if(j>=i) 
                printf("*"); 
            else
                 printf(" ");
     
        }
         printf("\n");    
    }

    return 0;
}
// ******* 
// _*****_
// __***
// ___*

// 1234567, k=1
//  23456, k=2
//   345, k=3
//    4, k=4