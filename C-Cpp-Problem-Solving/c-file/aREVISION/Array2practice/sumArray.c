// Write a program to calculate the sum of numbers stored in an array of size 10. 
// Take array values from the user.
/*
input : 10 23 12 33 93 49 58
*/
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 n: ");
    for(i=0;i<10;i++) 
        scanf("%d",&a[i]);

    for(i=0;i<10;i++) 
        sum=sum+a[i];

    printf("sum = %d",sum);
    return 0;
}