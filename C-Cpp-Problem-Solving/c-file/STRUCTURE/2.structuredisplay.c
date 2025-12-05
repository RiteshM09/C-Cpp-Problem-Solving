// Define a structure Employee with member variables id, name, salary
// Write a function to display employee data. [Refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};
struct Employee input();
void display(struct Employee);
int main()
{
    struct Employee e1;
    e1 = input();
    display(e1);
}

struct Employee input(){
    struct Employee e;
    printf("enter employee details: ");
    printf("Enter id: ");
    scanf("%d",&e.id);
    fflush(stdin);
    printf("Enter name: ");
    fgets(e.name,30,stdin);
    e.name[strcspn(e.name, "\n")] = '\0';
    printf("Enter salary: ");
    scanf("%f",&e.salary);

    return e;
}
void display(struct Employee e2)
{
    printf("\n output \n %d, %s, %2.f",e2.id,e2.name,e2.salary);
}
