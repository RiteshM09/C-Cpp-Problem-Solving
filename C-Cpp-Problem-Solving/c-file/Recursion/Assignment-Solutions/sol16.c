// 16. Write a recursive function to calculate HCF of two numbers
// function         -          int HCF(n1,n2) - HCF(n1,n2) if(n1>n2) - (n1%n2,n1) else (n2%n1,n2)
// R.C              -          int HCF()  -     (,)
// B.C              -   if n1,n2==0 and n1==n2

/*use euclid algorithm -  is a way to find the greatest common divisor of two positive integers.
                          to find HCF - 
                          if (a%b) == x , (a>b)
                          then, x hcf = hcf of a = hcf of b

*/
#include<stdio.h>
int HCF(int,int);
int main()
{
    int n1,n2,Result;
    printf("Enter 2 Number =");
    scanf("%d%d",&n1,&n2);
    Result=HCF(n1,n2);
    printf("HCF OF 2N is :%d",Result);
    return 0;
}

int HCF(int a,int b){
    if(a>b){
        if(a%b==0)
            return b;
        else  
            return HCF(a%b,b); 
    }
    else{
        if(b%a==0)
            return a;
        else
            return HCF(a,b%a);
    }
}

/*
int HCF(n1,n2) 
n1%n2=

*/

// 12 - 12,6,4,2,3,1
// 8  - 8,4,2,1
// 12%8 = 12 return 12


// 36 - 18,12,6,4,2,1
// 48 - 24,16,12,8,6,4,3,2,1
// 48%36=
// hcf- 12

// 8 - 
// 8%4= 4 
// 4 - 

