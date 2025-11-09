// Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
/*
i/p: 1 2 3 4 5 6 7 8 9 10
o/p: sumofeven= 30
     sumofodd = 25
*/
#include<stdio.h>
int main()
{
    int a[10],i, SumofEven=0,SumofOdd=0;

    printf("Enter 10 n: ");
    for(i=0;i<10;i++) 
        scanf("%d",&a[i]);

    for(i=0;i<10;i++){
        if(a[i]%2==0)
            SumofEven=SumofEven+a[i];
        else
            SumofOdd=SumofOdd+a[i];
    } 
    printf("EVEN Sum = %d",SumofEven);
    printf("\n ODD Sum = %d",SumofOdd);
    return 0;
}