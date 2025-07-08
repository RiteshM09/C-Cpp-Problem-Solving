/*
    1           j>=4 ,j<=4 
   121          j>=3 ,j<=5 
  12321         j>=2 ,j<=6
 1234321        j>=1 ,j<=7

 //Hint :  till j->4 the loop is increasing then after  it is decreasing
 
    1   
   123  k>2 (i==k) k--; 
  12345 k>3 (i>=k) k--;
 1234567 k>4 (i==k) k--;
*/
//     4           
//    345          
//   23456         
//  1234567
#include<stdio.h>
int main()
{
    int i,j,k,m;
    for(i=1;i<=4;i++)
    {
        k=1;

        for(j=1;j<=7;j++)
        {
            if(j<=3+i && j>=5-i){ 
                printf("%d",k);
                
                if(j>=4)
                    k--;
                else    
                    k++;
            }
            else    
                printf(" ");
                     
        }
        printf("\n");
    }
}



//     4           
//    345          
//   23456         
//  1234567

//     1   
//    123  
//   12345
//  1234567 