// Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,Even_Sum=0, Odd_Sum=0;

    printf("Enter Any 10 Numbers :");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            Even_Sum=Even_Sum+a[i];
        else    
            Odd_Sum=Odd_Sum+a[i];

    }
    printf("Sum of Even :%d",Even_Sum);
    printf("\nSum of Odd :%d",Odd_Sum);
     

    return 0;
}
// enter 10: 1 2 1 
// sum of even:
// sum of odd:

