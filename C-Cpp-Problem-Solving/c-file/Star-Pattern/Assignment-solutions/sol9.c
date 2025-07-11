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

    //     1
    //    1-1
    //   1-1-1
    //  1-1-1-1
#include<stdio.h>
int main()
{
    int lines;
    printf("Enter number of lines n=");
    scanf("%d",&lines);
    
    int i,j,k;
    for(i=1;i<=lines;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++){
                
            if(j<=lines-1+i && j>=lines+1-i) 
            {
                if(k) 
                    printf("*");
                else  
                    printf(" ");

                k=1-k;
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