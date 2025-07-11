/*
ABCDE
 BCDE
  CDE
   DE
    E

65 66 67 68 69
   66 67 68 69
      67 68 69
         68 69
            69
   
*/

#include<stdio.h>
int main()
{
    int i, j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            if(j>=i)
                printf("%c",'A'+j-1);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}