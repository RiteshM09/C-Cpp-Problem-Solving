// Q1. Create a structure Student with:
// roll number
// name
// percentage
// Take input for 3 students and print the details.
// Focus: declaring structure, array of structures, basic I/O.
#include<string.h>
#include<stdio.h>
struct Student{
    int rollno;
    char name[50];
    float percentage;
};
int main()
{
    struct Student s[3];//0 1 2 ,is only the size 
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d student details:",i+1);

        printf("\nEnter roll no. :");
        scanf("%d",&s[i].rollno);
        //clear input buffer
        getchar();

        printf("Enter name : ");
        fgets(s[i].name,50,stdin);
        // adjust delimiter
        s[i].name[strlen(s[i].name)-1]='\0';

        printf("Enter percentage : ");
        scanf("%f",&s[i].percentage);
    }
    printf("\n--- Output ---\n");
    for(i=0;i<3;i++)
        printf("\n%d %s %.2f",s[i].rollno, s[i].name, s[i].percentage);
    


    return 0;
}