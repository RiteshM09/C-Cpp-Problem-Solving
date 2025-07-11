/*
  
1         i=1 ,  j<=1  
12        i=2 ,  j<=2 
123       i=3 ,  j<=3 
1234      i=4 ,  j<=4 
12345     i=5 ,  j<=5  

*/


#include<stdio.h>
int main()
{  

    for(int i=1;i<=5;i++){

        for(int j=1;j<=5;j++){
            if(j<=i)
                printf("%d",j);
            else    
                printf(" ");
            
        }
         printf("\n");    
    }

    return 0;
}