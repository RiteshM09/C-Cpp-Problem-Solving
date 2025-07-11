// Write a recursive function to print first n even natural numbers.
// Function     PrintEven(n)               2 4 6..2n-2..2n       
// R.C          PrintEven(2n-2),(print 2n) (2 4 6..2n-2)
// B.C           n-0                when fuction will not get called        
//ex : 10 -  2 4 6 8 10 12 14 16 18 20
#include<stdio.h>
void PrintEven(int);
int main()
{
    int x;
    printf("Enter N natureal no. to print = ");
    scanf("%d",&x);
    printf("Even %d Natural Numbers are: ",x);
    PrintEven(x);
}

void PrintEven(int n){
    if(n>0)
    {
        PrintEven(n-1); 
        printf("%d ",2*n);
    }
}