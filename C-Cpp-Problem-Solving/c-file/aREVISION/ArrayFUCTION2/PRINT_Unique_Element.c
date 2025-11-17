// Write a function to print all unique elements in an array.
// input : 10 20 10 20 30 40 20 30
// sort: 10 10 20 20 20 30 30 40
// output: 40
#include<stdio.h>
void UniqueElements(int A[],int);
int main()
{
    int a[20],i,size ;
    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter n elements: ");
    for(i=0;i<size;i++) 
        scanf("%d",&a[i]);

    UniqueElements(a,size);
    return 0;
}
void UniqueElements(int A[],int S)
{
    int count,i,j;
    printf("Unique Elements: ");
    for(i=0;i<S;i++)
    {
        for(j=0,count=0;j<S;j++)
        {
            if(A[i]==A[j])
                count++; 
        }
        if(count==1)
        {
            printf("%d ",A[i]);
        }
            
    }
    printf("\n");
}