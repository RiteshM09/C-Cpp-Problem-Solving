/*
ABCDCBA     
ABC CBA
AB   BA
A     A
*/

// 1234321 i=1 , j<=4  or j>=4  
// 123_321 i=2 , j<=3  or j>=5  
// 12___21 i=3 , j<=2  or j>=6  
// 1_____1 i=4 , j<=1  or j>=7  


#include<stdio.h>
int main()
{
    int i,j,k;
  
    for(i=1;i<=4;i++)
    {
       
        for(j=1,k=1;j<=7;j++)  
        {
            
            if(j<=5-i || j>=3+i){
                printf("%d",k); 

                if(j<4)
                    k++;
                else    
                    k--;
            }
            else
                printf(" ");
            } 
        printf("\n");
    }
    
    return 0;
}