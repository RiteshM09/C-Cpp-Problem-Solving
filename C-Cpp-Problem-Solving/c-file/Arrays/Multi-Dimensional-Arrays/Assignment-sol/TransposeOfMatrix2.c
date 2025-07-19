//Write a program to print the transpose of a given square matrix.
// note this will only works with when matrix is a square matrix.
// transpose without using a diffent matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,t[10][10];
    printf("Enter numbers for matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("Transpose of  matrix element ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++){ //01 10 02 20 12 21  
            t[j][i]=a[i][j];
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }

    return 0;
}