//find the LCM (Least Common Multiple) of two numbers
//Lcm = a*b/hcf more optimize, less time complexity  
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
int HCF(int a,int b);
int main()
{
    int Lcm,a,b;
    printf("Enter 2 Number : ");
    scanf("%d%d",&a,&b);
    a = abs(a);// edge case(convert negative no. to positive)
    b = abs(b);

    if (a == 0 || b == 0) {
            printf("LCM = 0");
            return 0;
        }

    Lcm = (a*b) / HCF(a,b);


    printf("LCM = %d",Lcm);


    return 0;
}
int HCF(int a,int b){
    int temp;
    while(b)// a=33 b=12 b=a%b 9=33%12
    {
        temp=b; 
        b=a%b;
        a=temp;
        
    }   
    return a;
}
/*

*/

