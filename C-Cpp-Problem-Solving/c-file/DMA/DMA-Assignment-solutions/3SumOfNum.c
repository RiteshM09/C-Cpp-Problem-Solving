// 3. Write a program to calculate the sum of n numbers 
//entered by the user using malloc and free.
/*
Input : Enter size: 5 
        enter numbers: 4 
        enter numbers: 5
        enter numbers: 8 
        enter numbers: 9
        enter numbers: 10
output: sum of n : 36

*/
#include<stdio.h>
#include<stdlib.h>
void SumofN();
int main()
{
    SumofN();
}
void SumofN()
{
    int size,Sum=0;
    printf("Enter size of N:");
    scanf("%d",&size);

    int *Numbers = (int*)malloc( sizeof(int) * size);

    if(Numbers == NULL)
        printf("Memory allocation failed!");
    

    for(int i=0;i<size;i++)
    {
        printf("Enter Numbers #%d: ",i+1);
        scanf("%d",&Numbers[i]);
        Sum=Sum+Numbers[i];
    }    
    printf("\nSum of %d numbers is : %d",size,Sum);
    free(Numbers);
    Numbers=NULL;
}   
