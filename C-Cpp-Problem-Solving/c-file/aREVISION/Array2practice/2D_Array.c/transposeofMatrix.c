// Write a program to print the transpose of a given matrix.

// note this will only works only when the matrix is square (n × n).
// transpose without using a diffent matrix.

//For a general matrix (rows ≠ columns), 'in-place' transpose isn’t possible 
//with the same memory layout because the shape changes.
/*

*/
#include<stdio.h>
void swap(int *,int *);
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int m[3][3];
    printf("Enter a matirx of square matrix nxn :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }   
        printf("\n");
    }

    printf("Transpose of matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            swap(&m[i][j],&m[j][i]);
            printf("%d ",m[i][j]);
        }   
        printf("\n");
    }


    return 0;
}
