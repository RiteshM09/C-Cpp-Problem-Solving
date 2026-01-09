// Write a program to calculate the product of two matrices each of order 3x3.
/*
1st Matrix element 
1 1 1 
2 2 2 
0 0 0 

2nd Matrix element
2 2 2 
1 1 1 
1 1 1 

Product of 2 Matrices of order 3*3 :
4 4 4 
8 8 8 
0 0 0 

example 2:
1st matrix 3x3 :
1 1 1 
-2 3 2 
0 0 0 

2nd matrix 3x3 :
2 2 2 
1 -1 1 
1 1 -2 

Product of matrix :
4  2  1 
1 -5 -5 
0  0  0 

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
    
    printf("\nProduct of matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
           printf("%d ",c[i][j]);
        }
         printf("\n");
    }


    return 0;
}