#include<stdio.h>

int main()
{
    char g ;

    printf("Enter your grade = ");

    scanf("%c",&g); 
   
    switch (g)
    {
    case 'A':
        printf("Outstanding");
        break;
    case 'B':
        printf("Excellent");
        break;
    case 'C':
        printf("Very Good");
        break;
    case 'D':
        printf("Good");
        break;
    
    default:
        printf("Invalide grade");
        break;

    }
    
    return 0;
}
