//Write a program to print the transpose of a given matrix.
// note this will only works only when the matrix is square (n × n).
// transpose without using a diffent matrix.

//For a general matrix (rows ≠ columns), 'in-place' transpose isn’t possible 
//with the same memory layout because the shape changes.
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
    printf("Transpose of  matrix element: \n");
    for(i=0;i<=2;i++)
    {
        for(j=i+1;j<=2;j++){ //01 10 02 20 12 21  
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }


    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }


    return 0;
}