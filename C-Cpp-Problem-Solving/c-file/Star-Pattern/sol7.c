/*
ABCDCBA     
ABC CBA
AB   BA
A     A
*/

// j values,
// 1234567
// 123 567
// 12   67
// 1     7

// k values,
// 1234321 i=1 , j<=4  or j>=4  j<=5-i or j>=3+i
// 123_321 i=2 , j<=3  or j>=5  
// 12___21 i=3 , j<=2  or j>=6  
// 1_____1 i=4 , j<=1  or j>=7  


#include<stdio.h>
int main()
{
    int i,j,ch;
  
    for(i=1;i<=4;i++)
    {
       
        for(j=1,ch='A';j<=7;j++)  
        {
            
            if(j<=5-i || j>=3+i){
                printf("%c",ch); 

                if(j<4)
                    ch++;
                else    
                    ch--;
            }
            else{
                if(j==4)
                    ch--;
                printf(" ");
            }
                
            } 
        printf("\n");
    }
    
    return 0;
}