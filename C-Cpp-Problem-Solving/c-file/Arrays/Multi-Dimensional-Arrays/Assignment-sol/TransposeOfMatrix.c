//Write a program to print the transpose of a given matrix.

#include<stdio.h>
int main()
{
    int a[3][3],i,j,temp;
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
        //01 10 02 20 12 21  

            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
    }


    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }


    return 0;
}