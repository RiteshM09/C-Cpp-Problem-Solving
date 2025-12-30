// 14. Write a recursive function to print reverse of a given number
// function     -     Reverse(N) --      
// R.C          -      (N/2) printf(Reverse(N)) ...0    
// B.C          -     n==0
#include<stdio.h>
void Reverse(int);
int main()
{
    int num;
    printf("Enter N : ");
    scanf("%d",&num);

    Reverse(num);

    return 0;
}
void Reverse(int n)
{
    //base case
    //recursive case
    if(n>0)
        {
             printf("%d", (n%10));
             Reverse(n/10);    
        }

}
/*

*/
