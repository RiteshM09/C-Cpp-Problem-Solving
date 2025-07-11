/*
     1
    1-1
   1-2-1    k>i
  1-2-2-1
 1-2-3-2-1

*/
/*
j  values:              k values
    5           5         1
   456         4 6       101
  34567       3 5 7     10101
 2345678     2 4 6 8   1010101  
123456789   1 3 5 7 9 101010101


    *           5       j>=5 , j<=5 (j>=6-i && j<=4+i)
   * *         4 6      j>=4 , j<=6 
  * * *       3 5 7     j>=3 , j<=7
 * * * *     2 4 6 8    j>=2 , j<=8
* * * * *   1 3 5 7 9   j>=1 , j<=9
*/

#include<stdio.h>
int main()
{
    int i,j,k,x;
    for(i=1;i<=5;i++)
    {
        k=1; // variable to print values at alternate position
        x=1; // variable to increment values till j=5 then decrement
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i){ //5, 4-6 , 3-5-7 , 2-4-6-8 , 1-3-5-7-9
                if(k)
                {
                    printf("%d",x); // till j=5 increment x else decrement
                     if(j<5)
                        x++;
                     else    
                        x--;
                }
                else{
                    printf(" ");        
                    if(j==5)       // when j=5 and (j is not printing) at (i=2,i=4) decrement x
                        x--;
                 }

            k=1-k; // print k=1 else k=" "
            }
            else    
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

//     5         1   
//    4-6       1-1  
//   3-5-7     1-2-1   
//  2-4-6-8   1-2-2-1   
// 1-3-5-7-9 1-2-3-2-1  
