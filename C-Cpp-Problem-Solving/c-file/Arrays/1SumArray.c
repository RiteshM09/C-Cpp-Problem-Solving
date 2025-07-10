// Write a program to calculate the sum of numbers stored in an array of size 10. 
// Take array values from the user.

#include<stdio.h>
int main()
{
    int sum=0, a[10], i;
    printf("Enter 10 Numbers = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of 10 = %d",sum);

    return 0;
}