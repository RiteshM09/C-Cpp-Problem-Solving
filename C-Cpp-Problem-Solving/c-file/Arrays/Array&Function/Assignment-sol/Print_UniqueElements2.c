// Write a function to print all unique elements in an array.
// input : 10 20 10 20 30 40 20 30
// sort: 10 10 20 20 20 30 30 40
// output: 40
#include<stdio.h>
void Print_unique(int A[],int);
int main()
{
    int s,a[20],i;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    Print_unique(a,s);
    return 0;
}
void Print_unique(int A[],int size){
    int i,j,count;
       printf("Unique elements array: ");
    for(i=0;i<size;i++)
    {   
        for(j=0,count=0;j<size;j++)
        {
            if(A[i]==A[j]) //if count is appers only 1 then element is unique
                count++;
        }
        if(count==1)
            printf("%d ",A[i]);
    }
    printf("\n");
   
}