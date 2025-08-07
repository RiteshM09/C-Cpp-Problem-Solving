//find the LCM (Least Common Multiple) of two numbers 
//LCM using Prime factorization 
/*
input : 4 6 
output: 12 

input : 5 10
output: 10

input : 7 3 
output: 21

input : 8 12
output: 24
*/

#include<stdio.h>
#include <stdlib.h> 
int main()
{
    int a,b,i=2,L=1,flag=0;
    printf("Enter 2 Number : ");
    scanf("%d%d",&a,&b);
    a = abs(a);// edge case(convert negative no. to positive)
    b = abs(b);

    if (a == 0 || b == 0) {
            printf("LCM = 0");
            return 0;
        }

    while(a>1 || b>1){
        
    if(a%i==0){
        a=a/i;
        flag=1;
    }
    if(b%i==0){
        b=b/i;
        flag=1;
    }    
    if(flag==1)
    {
        L=L*i;
        flag=0;
    }
    else
        i++;
   }
   printf("LCM = %d",L);


    return 0;
}

