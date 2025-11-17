// Write a function to print all unique elements in an array.
// input : 10 20 10 20 30 40 20 30
// sort  : 10 10 20 20 20 30 30 40
// output: 40
#include<stdio.h>
void sort(int [],int);
void UniqueElements(int [],int);
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
void sort(int a[],int s)
{
    int i,temp;
    for(int r=0;r<=s-1;r++){
        for(i=0;i<=s-2-r;i++)// 10 20 10 20 40 40 20 30
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    

}
void UniqueElements(int A[],int S)
{
    sort(A,S); // 10 10 20 20 20 30 30 40
    int i;
    printf("sorted array :");
    for(int i=0;i<S;i++)
        printf("%d ",A[i]);
    
    for(i=0;i<=S-1;i++)// for a unique i , i != prev element && i != next element
    {
        if(((i==0) || (A[i]!=A[i-1]) &&  (i==S-1) || (A[i]!=A[i+1])))// for i=SECOND to SECOND_LAST && check seperatly check for i=FIRST and i=LAST
              printf("%d ",A[i]);
    }
}
