//Write a program to sort an array of 10 elements in descending order.
// i\p -  50 20 30 80 10 40 60 90 100 15
// o/p - 100 90 80 60 50 40 30 20 15 10
// descending order bubble sort
#include<stdio.h>
int main()
{
    int i,a[10],r,t,size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter n values : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(r=1;r<size;r++){// if size=10,then 9 rounds(1 to size-1)
     for(i=0;i<size-r;i++)// for rounds1, r=1: i runs from 0to8 (size - 1 - r => 9(10-1) - 1 = 8), smallest element moves to end
     {                    // for r=2, total:8 comparisons  0to7 (9-2=7)
        if(a[i]<a[i+1])   
        {
         t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
        }
     }
    }   

    printf("Sorted array in Descending Order :");
    for(i=0;i<=size-1;i++)
        printf("%d ",a[i]);
    

    return 0;
}
