#include<stdio.h>
int main()
{
    int ch,a,b;
    printf("Enter two  number = ");
    scanf("%d %d",&a,&b);

    printf("\nMENU \n1 -> ADDITION \n2 -> SUBTRACTION \n3 -> MULTIPLICATION \n4 -> DIVISION ");

    printf("\nEnter your choice = ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\nADDITON ");
        printf("%d",a+b);
        break;
    case 2:
        printf("\nSUBTRACTION ");
        printf("%d",a/b);
        break;
    case 3:
        printf("\nMULTIPLICATION ");
        printf("%d",a*b);
        break;
    case 4:
        printf("\nDIVISION ");
        printf("%d",a/b);
        break;
    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}





