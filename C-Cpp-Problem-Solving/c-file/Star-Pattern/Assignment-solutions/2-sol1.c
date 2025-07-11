/*

*       i=1 ,j=4 - j<=5-i  
**      i=2 ,j=2 - j<=5-i  
***     i=3 ,j=3 - j<=5-i  
****    i=4 ,j=4 - j<=5-i  
*****   i=5 ,j=5 - j<=5-i  

*/


#include<stdio.h>
int main()
{  

    for(int i=1;i<=5;i++){

        for(int j=1;j<=5;j++){
            if(j<=5-i)
            printf("* ");
            
        }
         printf("\n");    
    }

    return 0;
}