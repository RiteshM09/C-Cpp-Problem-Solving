// Write a functiont to check whether a given Number is palindrome or not.
/*
1 input : 434
  output: True

2 input : 9
  output: True

3 input : 1221
  output: True

4 input : 98089
  output: True

5 input : 512
  output: False
*/
#include<stdio.h>
int PalindromeNum(int n);
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(PalindromeNum(n))
         printf("True");
     else    
         printf("False");
     return 0;

}
int PalindromeNum(int n){
    int rev=0,original_N=n;

    while(n){
       rev=(rev*10)+n%10;
       n=n/10;
    }
    
    return (original_N==rev);

}
// original number 
// reverse the number 
// compare original with the reverse
// return 1 if identical and 0 if not