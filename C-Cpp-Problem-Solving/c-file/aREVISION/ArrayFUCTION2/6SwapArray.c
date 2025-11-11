// Write a function to swap two elements of given array with specified indices.
// enter size: 4
// i= 40 20 30 50
// enter 2 index values two swap: 0 4
// output - 50 20 30 40
void SwapIndex(int b[],int,int,int);
#include<stdio.h>
int main()
{
    int a[20],i,size,n,m;
    printf("size of array : ");
    scanf("%d",&size);

    printf("Array Elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter 2 indices to swap : ");
    scanf("%d %d",&n,&m);
    
    SwapIndex(a,size,n,m);
    
}
void SwapIndex(int b[],int S,int x,int y)
{
    int i,temp;
    for(i=0;i<S;i++)
    {
        temp=b[x];
        b[x]=b[y];
        b[y]=temp;
    }
    printf("Print New array :");
    for(i=0;i<S;i++)
        printf("%d ",b[i]);
    
}