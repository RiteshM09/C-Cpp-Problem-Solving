//Write a program to sort an array of 10 elements in descending order.
// i\p -  50 20 30 80 10 40 60 90 100 15
// o/p - 100 90 80 60 50 40 30 20 15 10
#include<stdio.h>
int main()
{
    int a[10],i,temp,r;
    printf("Enter 10 n: ");
    for(i=0;i<=9;i++) 
        scanf("%d",&a[i]);

    for(r=1;r<=9;r++){ // 1 to 9 rounds for comparing 9 times 
        for(i=0;i<=8-r;i++)// total comparision 9(n-1)
        {
            if(a[i]<a[i+1])// when i=0,comparison will be  a[8]<a[8+1] 
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("Sorted array in descending order");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    return 0;
}

// 50 20 30 80 10 40 60 90 100 15
// 50 30 80 20 40 60 90 100 15 10 (9)comparision(9-0)
// 50 80 20 40 60 90 100 30 15 10 (8)comparision(9-1)
// 80 50 40 60 90 100 30 20 15 10 (7)comparision(9-2)