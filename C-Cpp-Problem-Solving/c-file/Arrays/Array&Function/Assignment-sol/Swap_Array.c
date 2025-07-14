// Write a function to swap two elements of given array with specified indices.
// enter size: 4
// i= 40 20 30 50
// enter 2 index values two swap: 0 4
// output - 50 20 30 40
#include<stdio.h>
void SwapIndices(int A[], int, int, int);
void SwapIndices(int A[],int size, int x, int y)
{
    int temp,i; // A[x] - 20 A[y] - 50
    temp=A[x];// temp = 0 
    A[x]= A[y];
    A[y]=temp;
    // A[x] - 50 A[y] - 20
    printf("Array after swap: ");
    for(i = 0; i < size; i++)
        printf("%d ",A[i]);
        
}
int main()
{
    int s,a[20],i,index1,index2;
    printf("Enter Array Size :");
    scanf("%d",&s);

    printf("Enter Array Element :");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    printf("Enter Index 1:");
    scanf("%d",&index1);

    printf("Enter Index 2:");
    scanf("%d",&index2);

    SwapIndices(a,s,index1,index2);
    return 0;
     
}