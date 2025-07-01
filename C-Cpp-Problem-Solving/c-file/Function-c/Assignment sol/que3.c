// Write a function to print first n natural numbers. (TSRN)
#include<stdio.h>
void natural(int);
int main(){

    int n; 
    printf("Enter n = ");
    scanf("%d",&n);

    natural(n); //Actual Argument  
    return 0;

}

void natural(int x) //formal Argument 
{
    printf("First %d Natual number are =",x); 
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }

}