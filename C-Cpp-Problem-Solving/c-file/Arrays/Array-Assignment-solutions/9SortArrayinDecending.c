//Write a program to sort an array of 10 elements in descending order.
// i\p -  50 20 30 80 10 40 60 90 100 15
// o/p - 100 90 80 60 50 40 30 20 15 10
#include<stdio.h>
int main()
{
    int i,a[10],r,t;
    printf("Enter 10 values : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(r=1;r<=9;r++){
     for(i=0;i<=9-r;i++)
     { 
        if(a[i]<a[i+1])
        {
         t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
        }
     }
    }   

    printf("Sorted array in Descending Order :");
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    

    return 0;
}
