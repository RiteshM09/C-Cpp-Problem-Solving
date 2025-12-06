// Define a structure Employee with member variables id, name, salary
// Write a function to take input employee data from the user.
#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};
struct Employee input();
int main()
{
    struct Employee e1 = input();
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