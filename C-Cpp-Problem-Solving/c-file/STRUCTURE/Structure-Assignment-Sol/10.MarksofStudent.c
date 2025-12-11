// Write a program to enter the marks of 5 students in Chemistry, 
// Mathematics and Physics (each out of 100) using a 
// structure named Marks having elements roll no., name, 
// chem_marks, maths_marks and phy_marks and then display 
// the percentage of each student.
/*
input:  Roll No
        Name
        Chemistry Marks
        Maths Marks
        Physics Marks
101
Ritesh
78
82
91

102
Amit
67
70
65

103
Sara
90
88
84

104
Neha
55
60
58

105
Karan
80
75
85

output: 
Roll No: 101, Name: Ritesh, Percentage: 83.67
Roll No: 102, Name: Amit,   Percentage: 67.33
Roll No: 103, Name: Sara,   Percentage: 87.33
Roll No: 104, Name: Neha,   Percentage: 57.67
Roll No: 105, Name: Karan,  Percentage: 80.00

*/
#include<stdio.h>
#include<string.h>
struct Marks{
    int rollno;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
void displayPercentage(struct Marks *,int );
void displayPercentage(struct Marks *Student_Marks,int n)
{
    printf("\n\n DISPLAY STUDENT MARKS : ");
    for(int i=0;i<n;i++){
        int chem=Student_Marks[i].chem_marks;
        int maths=Student_Marks[i].maths_marks;
        int phy= Student_Marks[i].phy_marks;

        float percentage=(chem+phy+maths)/3.0;

        printf("\nROll NO: %d, Name: %s, Percentage: %.2f\n ",Student_Marks[i].rollno, Student_Marks[i].name, percentage );
    }
}
int main()
{
    int marks,i;
       struct Marks student[50];
       printf("Enter marks of 5 students :");
       for(int i=0;i<5;i++)
       {

           printf("\n\n%d Roll No.: ",i+1);
           scanf("%d",&student[i].rollno);
           fflush(stdin);

           printf("Enter Name: ");
           fgets(student[i].name,50,stdin);
           student[i].name[strcspn(student[i].name,"\n")]='\0';

           printf("\nENTER Student %d marks for: ",i+1);
           printf("\nCHEM: ");
           scanf("%d",&student[i].chem_marks);
           printf("MATHS: ");
           scanf("%d",&student[i].maths_marks);
           printf("PHY: ");
           scanf("%d",&student[i].phy_marks);
      }
      displayPercentage(student,5);

    return 0;   
}
