// Write a program to find the greatest number stored in an array of size 10. 
//Take array values from the user.

// 12 2 32 1 2 2 1 23 4 4 23 3
// 23
#include<stdio.h>
int main()
{
    int i,a[10],max=0;
    printf("Enter 10 Numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);  
        if(a[i]>max) 
            max=a[i];  
    }
    printf("Greater amoung all Number is : %d",max);
}