//Write a program to print the transpose of a given square matrix.

#include<stdio.h>
int main()
{
    int a[10][10],i,j,t[10][10],row, col;
    printf("Enter no. of Rows and columns:");
    scanf("%d %d",&row,&col);
    printf("Enter numbers for matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("Transpose of  matrix element: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){ //01 10 02 20 12 21  
            t[j][i]=a[i][j];
        }
    }

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }

    return 0;
}