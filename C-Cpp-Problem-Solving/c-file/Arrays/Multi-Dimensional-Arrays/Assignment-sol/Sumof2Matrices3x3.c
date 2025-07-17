// Write a program to calculate the sum of two matrices each of order 3x3.
// input - 
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,sum[3][3];
    printf("Enter 1st array: element ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("Enter 2nd array: element");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }

    printf("\nPrint 1st array element \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nPrint 2nd array element\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("\nsum of 2 array of order 3*3 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            sum[i][j]=a[i][j]+a[i][j];
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }

    

    return 0;
}