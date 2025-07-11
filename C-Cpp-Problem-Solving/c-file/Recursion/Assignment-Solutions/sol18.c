// Write a program to calculate the power of any number using recursion 
//  function                    PowerN(n)
// R.C
// B.C

// X^y
// enter power - x y 

// Power(5,3) 5*5*5 
// Power(5,3)= 5*Power(5,3-1), 
// Power(x,y)= x*Power(x,y-1)

// B.C y==0 return 0

// Power(x,y) x*x*x*x*x...y
// Power(x*x,(y-1)) (x*x*x..y-1).x
// x*Power(x,y-1)
#include<stdio.h>
int Power(int,int);
int Power(int x,int y){
    if(y==0)
        return 1;
    return x*Power(x,y-1);

}

int main()
{
    int a,b;
    printf("Enter X =");
    scanf("%d",&a);
    printf("Power y=");
    scanf("%d",&b);
    printf("\nValue of X^y is = %d",Power(a,b));
    return 0;
}


