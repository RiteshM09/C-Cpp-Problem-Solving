//Write a program to calculate the sum of two matrices each of order 3x3.
/*

Print 1st matrix element 
1 1 3 
2 1 1 
3 2 1 

Print 2nd matrix element
0 0 1 
0 1 2 
0 0 0 

sum of 2 matrix of order 3*3 :
1 1 4 
2 2 3 
3 2 1 

*/

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter 1st matrix 3x3 :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter 2st matrix 3x3 :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    printf("\nPRINT 1st matrix 3x3 :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }

    printf("\nPRINT 2nd matrix 3x3 :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
         printf("\n");
    }
    
    printf("Sum of 2 matrix 3x3 :\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]= a[i][j]+ b[i][j];
            printf("%d ",c[i][j]);
        }
         printf("\n");
    }

    return 0;
}
