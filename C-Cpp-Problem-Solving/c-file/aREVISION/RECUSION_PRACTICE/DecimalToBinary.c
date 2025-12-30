// 12. Write a recursive function to print 
// binary equivalent of a given decimal number

/* decimal % 2 = binary

input: 2
output:1 0

input: 16
output 1 0 0 0

input: 1
output:1

10%2 = 0
5%2  = 1
2%2  = 0
1%2  = 1

1. READY function  --->  DtoB(n)  (n)(n/2)....0

2. recursive case  --->  (n%2) OddSum(n/2) (n)(n/2)...1 0
                         
3. base case (end) ---> n > 0 return
*/
#include<stdio.h>
void DtoB(int n);
int main()
{
    int num;
    printf("Enter N : ");
    scanf("%d",&num);
    
    // if n is 0
    (num == 0) ? printf("0") : DtoB(num);
    return 0;
}
void DtoB(int n)
{
    //recursive & base case
    if(n>0){

        DtoB(n/2);
        printf("%d ",n%2);

    }
}