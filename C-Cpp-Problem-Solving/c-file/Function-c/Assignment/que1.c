// Write a function to calculate area of circle. (TSRS)
#include<stdio.h>
#define Pi 3.14
float circle(float );
int main(){
   float n,r;
   printf("Enter r="); 
   scanf("%f",&r);
    n=circle(r); 
    printf("Area of circle = %.2f",n);//Actual Argument( Used to send data to function )
   return 0;
}

float circle(float x) // formal Argument ( Variables declared in the function definition that receive those values )
{
    float Ar; 
    Ar = 3.14* x * x; 
    return Ar;
}







