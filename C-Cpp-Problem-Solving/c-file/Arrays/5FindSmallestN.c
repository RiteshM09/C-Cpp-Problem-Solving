// Write a program to find the Smallest number stored in an array of size 10. 
//Take array values from the user.
// 3 20 16 13 1 9 10 23 40 2
// 1
#include<stdio.h>
int main()
{
    int i,a[10],min;
    printf("Enter number : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Smallest amoung all values is %d",min);

}