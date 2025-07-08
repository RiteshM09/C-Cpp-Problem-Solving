/*
---*    i=1,j<=4     4                 j=4
--*-*   i=2,j<=3    3 5             j=3   j=5
-*-*-*  i=3,j<=    2 4 6          j=2  j=4  j=6 
*-*-*-* i=4,j<=   1 3 5 7       j=1  j=3  j=5  j=7
 
*/
//     4       4
//    345     3 5 
//   23456   2 4 6  
//  1234567 1 3 5 7

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=7;j++){
                
            if(j<=3+i && j>=5-i) 
            {
                if(k==1 || k==3) 
                {                 
                    if(j%2==0) 
                        printf("*");
                    else    
                        printf(" ");
                }
                else  // k=4 j=2
                    if(j%2!=0)
                        printf("*");
                    else    
                        printf(" ");

            }  
            else    
                printf(" ");
        }
        printf("\n");  
    }
    

    return 0;
}
// ___*
// --*-*
// -*-*-*
// *-*-*-*