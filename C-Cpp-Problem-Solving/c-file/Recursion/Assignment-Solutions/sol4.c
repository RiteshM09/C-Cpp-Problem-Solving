// Write a recursive function to print first n even natural numbers in reverse order.
// Function     PrintEven(2*n)       2n-2 2n-4 2n-6 2n-8..4..2
// R.C          PrintEven(n-1) . 2n (2n-2 2n-4 2n-6 2n-8..4..2 )
// B.C            n-0              when fuction will not get called        
//ex : 10 - 10 8 6 4 2

#include<stdio.h>
void PrintEvenRev(int);
int main()
{
    int x;
    printf("Enter N natureal no. to print = ");
    scanf("%d",&x);

    printf("Even %d Natural Numbers in Reverse order are: ",x);
    PrintEvenRev(x);
    return 0;
}
void PrintEvenRev(int n){
     if(n>0)
     {
        printf("%d ",2*n);
        PrintEvenRev(n-1);
     }

}