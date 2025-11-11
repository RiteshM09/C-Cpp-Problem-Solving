// Write a function to find the greatest number from the given array of any size.
// (TSRS)
// input - 12 21 32 100
// output - 100


// here, the data of array a is not copied into array b.
// but, a and b both refer to the same array in memory.
// b is just another pointer variable that points to the same memory location as a
//Any changes done to b[i] inside input function [Max_Number()] will also change a[i] in the main function

#include<stdio.h>
int greatestN(int b[],int n); // Function decleration
int main()
{
    int a[100],N,i,Result;
    printf("Enter Length of array :");
    scanf("%d",&N);

    printf("Enter Array Elements:");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);

    Result=greatestN(a,N);//array , size ( here Arrays are passed by reference in C not copied)
    printf("Greater Number from all is: %d",Result);
    return 0;
}
int greatestN(int b[],int n){ // same array of name b , array size
   int max=b[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}
