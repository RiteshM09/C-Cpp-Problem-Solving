//Write a program to calculate the product of two matrices each of order 3x3.
// Write a program to calculate the sum of two matrices each of order 3x3.
// input - 
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,product[3][3],sum,k;
    printf("Enter 1st matrix element ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("Enter 2nd matrix element");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
        printf("\n");
    }

    printf("\nPrint 1st Matrix element \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nPrint 2nd Matrix element\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("\nProduct of 2 Matrices of order 3*3 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0,sum=0;k<=2;k++)
                sum = sum + (a[i][k]*b[k][j]); 
            product[i][j] = sum;
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",product[i][j]);
        printf("\n");
    }

    return 0;
}