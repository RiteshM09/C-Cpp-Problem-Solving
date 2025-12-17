//Define a structure Student with name, roll number and college name as members.
//Define another structure Team with two Student type variables as members.
//Now, define a method to dynamically create a Student type variable 
//and initialise with the values received in the arguments. Return address of Student type variable.

/*
input:
Enter details for Student 1
Name: Ritesh
Roll Number: 23
College Name: ABC Engineering College

Enter details for Student 2
Name: Aman
Roll Number: 27
College Name: XYZ Institute of Technology


output:
Team Details:
Student 1:
Name: Ritesh
Roll Number: 23
College Name: ABC Engineering College

Student 2:
Name: Aman
Roll Number: 27
College Name: XYZ Institute of Technology

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[50];
    int rollno;
    char clgName[50];
};
struct Team{
    struct student *s1;
    struct student *s2;
};
struct student *NewStudent(char n[], int r, char c[]);
// Function to dynamically create and initialize Student
struct student *NewStudent(char n[], int r, char c[]){

    struct student *ptr;
    ptr = (struct student*)malloc(sizeof(struct student));
    
    if (ptr == NULL)
    {
        printf("MEMORY allocation fails!!");
        return NULL;
    }

    strcpy(ptr->name,n);
    ptr->rollno = r;
    strcpy(ptr->clgName,c);

    return ptr;
}
int main()
{
    struct Team t1;
    char name[50], college[50];
    int roll;

    printf("Enter details of Student 1\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Roll No: ");
    scanf("%d", &roll);
    printf("College: ");
    scanf("%s", college);

    t1.s1 = NewStudent(name, roll, college);

    printf("\nEnter details of Student 2\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Roll No: ");
    scanf("%d", &roll);
    printf("College: ");
    scanf("%s", college);

    t1.s2 = NewStudent(name, roll, college);

        // Output
    printf("\n--- Team Details ---\n");
    printf("Student 1: %s | %d | %s\n",t1.s1->name, t1.s1->rollno, t1.s1->clgName);

    printf("Student 2: %s | %d | %s\n",t1.s2->name, t1.s2->rollno, t1.s2->clgName);

    free(t1.s1);
    free(t1.s2);
    t1.s1=NULL;
    t1.s2=NULL;

    return 0;
}
