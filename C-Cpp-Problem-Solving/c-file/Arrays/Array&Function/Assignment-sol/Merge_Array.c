// Write a function to merge two arrays of the same size sorted in descending order.
// Input:3 4 
// Array 1: 5 3 2 1 
// Array 2: 9 8 7 2
// Merge array: 9 8 7 5 3 2 2 1
#include<stdio.h>
void MergeArray(int A[],int B[],int,int merge[]);
int main()
{
    int a[20],b[20],i,j,s,m[2*s];
    printf("Enter array size:");
    scanf("%d", &s);
    
    printf("\nEnter 1 array Element");
    for(i=0;i<s;i++)
        scanf("%d", &a[i]);

    printf("\nEnter 2 array Element :");
    for(j=0;j<s;j++)
        scanf("%d", &b[j]);

    MergeArray(a,b,s,m);

    return 0;
}
void MergeArray(int A[],int B[],int size,int merge[])
{
    int i,j,r,temp;
    // sort Array 1 in Decending Order
    for(r=0;r<size;i++){
        for(i=0;i<size-1-r;i++)
        {
            if(A[i]<A[i+1]){
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }

        }
    }

    printf("Array 1 in Decending order:");
    for(j=0;j<size;j++)
        printf("%d",A[i]);
    
    // sort Array 2 in Decending order
    for(r=0;r<size;j++){
        for(j=0;j<size-1-r;j++)
        {
            if(B[j]<B[j+1]){
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }

        }
    }
    
    printf("Array 2 in Decending order:");
    for(j=0;j<size;j++)
        printf("%d",B[j]);
     
    if(A[i]>A[j]){
        merge[i]=A[i];
        i++;
    }
    printf("Merge the array:");
    for(i=0;i<size*2,i++)
        merge[i]=A[i];
}