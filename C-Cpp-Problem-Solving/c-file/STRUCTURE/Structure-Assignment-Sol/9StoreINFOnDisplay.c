// 9. Write a program to store information of n students 
//and display them using structure
/*
Enter n Student  : 3

Enter Details of student #1  
Enter Name: A
Enter roll No.: 2
Enter Percentage : 33.3

Enter Details of student #2  
Enter Name: B
Enter roll No.: 3
Enter Percentage : 44.4

Enter Details of student #3  
Enter Name: C
Enter roll No.: 5
Enter Percentage : 66.6

..

----|| OUTPUT ||----

Display Students Details:
#1 Student Info :
 Name: A | RollNo.: 2 | Percentage : 33.30 

#2 Student Info :
 Name: B | RollNo.: 3 | Percentage : 44.40 

#3 Student Info :
 Name: C | RollNo.: 5 | Percentage : 66.60 

*/
#include<stdio.h>
#include<string.h>
struct StudentInfo{
    int rollno;
    char name[50];
    float percentage;
};
void displaySTRUCTURE(struct StudentInfo [], int);
int main()
{
    int i,n; 
    struct StudentInfo s[10];
    printf("Enter n Student  : ");
    scanf("%d",&n);// due to this fgets will read \n char after this hit enter(\n)
    
    for(i=0;i<n;i++)
    {
        printf("\n Enter Details of student #%d  ",i+1);
        
        while(fgetc(stdin) != '\n')   // clear buffer ONCE
        
        printf("\nEnter Name: ");
        fgets(s[i].name,50,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';

        printf("Enter roll No.: ");
        scanf("%d",&s[i].rollno);
        
        printf("Enter Percentage : ");
        scanf("%f",&s[i].percentage);
    
    }
    displaySTRUCTURE(s,n);
    return 0;   
}
// Arrays don’t get passed — addresses do *s1 or s1[] not just (struct StudentInfo s1)
void displaySTRUCTURE(struct StudentInfo s1[], int size){
    printf("\nDisplay Students Details:\n ");
    for(int i=0;i<size;i++)
    {
        printf("\n#%d Student Info :",i+1);
        printf("\n Name: %s | RollNo.: %d | Percentage : %.2f \n",s1[i].name, s1[i].rollno, s1[i].percentage);
    }
}

