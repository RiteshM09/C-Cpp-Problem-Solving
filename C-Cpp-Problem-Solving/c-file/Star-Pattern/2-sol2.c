/*

    *     i=1 ,  j>=5  
   **     i=2 ,  j>=4 
  ***     i=3 ,  j>=3  
 ****     i=4 ,  j>=2 
*****     i=5 ,  j>=1  

*/


#include<stdio.h>
int main()
{  

    for(int i=1;i<=5;i++){

        for(int j=1;j<=5;j++){
            if(j>=6-i)
                printf("*");
            else    
                printf(" ");
            
        }
         printf("\n");    
    }

    return 0;
}