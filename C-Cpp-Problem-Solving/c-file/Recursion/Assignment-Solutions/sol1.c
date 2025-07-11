// Write a recursive function to print first n natural numbers
// Function - 1 2 3 4 5 - print(n) - PrintN(n)  1 2 3 4 5..n-1 n
// R.C -                           - PrintN(n-1) Printf("%d",n);        1 2 3 4 n-1
// B.C - n -> 0                 - (condition when u dont have to call printN function)

#include<stdio.h>
void PrintN(int);

int main(){
    int x;
    printf("Enter N natural number = ");
    scanf("%d",&x);

    PrintN(x);
    return 0;
}
void PrintN(int n)
{
    if(n>0){
        PrintN(n-1);
        printf("%d ",n);
    }
}