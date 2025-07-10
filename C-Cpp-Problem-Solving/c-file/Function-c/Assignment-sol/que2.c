// Write a function to calculate circumference of a circle. (TSRS)
#include<stdio.h>
#define Pi 3.14
float circumference(float); //function declaration

int main(){ 
    float r,n;  
    printf("Enter radius= ");
    scanf("%f",&r);
    n=circumference(r); 
    printf("Circumference of Circle = %f",n);
    return 0;
}

float circumference(float x)
{
    float C;
    C = Pi * x * 2;
    return C;
}

// ERRORS un-noticed 
// 1 #define Pi 3.14 syntax
// %d vs %f mistake
// ; missing , not proper dry run 



