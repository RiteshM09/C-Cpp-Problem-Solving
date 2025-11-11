//Write a program to sort an array in any order.
// i\p -  50 20 30 80 10 40 60 90 100 15
// o/p - 100 90 80 60 50 40 30 20 15 10
// TSRN
#include<stdio.h>
void SortArray(int a[],int);
int main()
{
    int i,a[20],s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    printf("Enter n values : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    SortArray(a,s);

    return 0;
}
void SortArray(int b[],int size)// 3 2 5 4 1
{
    int i,N,temp,r;// size=5,01234
    for(r=0;r<size;r++)// 0 to 4, r<5
    {
        for(i=0;i<size-1-r;i++)//i<3-r, 0123(4)comparision 
        {
            if(b[i]>b[i+1])// r=0,i=0123 ( 3 cause, a[i]>a[i+1] ) ( a[1]>a[1+1]....a[3]>a[3+1] )
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }

    printf("Sorted array in Ascending Order :");
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}