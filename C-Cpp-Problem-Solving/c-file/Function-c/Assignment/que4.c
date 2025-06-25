// Write a function to print first n even natural numbers. (TSRN)
#include<stdio.h>
void EvenN(int);
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    EvenN(n); //Actual Argument
    return 0;
    
}
void EvenN(int x) // Formal Argument 
{
    printf("First %d Even Natural Numbers are = ",x);
    for(int i=1;i<=x*2;i++)
    {
        if(i % 2 == 0){
            printf("%d",i);
        }
        else{
            printf(" ");
        }
    }

}