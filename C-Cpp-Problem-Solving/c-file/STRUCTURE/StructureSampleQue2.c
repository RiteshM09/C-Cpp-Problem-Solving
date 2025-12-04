// Q2. Create a structure Employee with:
// id
// name
// salary
// Write a function void display(struct Employee e) that prints details.
// Focus: passing structure to function.
#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
void display(struct Employee);
int main()
{
    struct Employee e1;
    printf("Enter Employee details: ");
    printf("Enter id : ");
    scanf("%d",&e1.id);
    // clear buffer
    getchar();
    printf("Enter name : ");
    fgets(e1.name,50,stdin);
    // string complement span removes \n if appers in e1.name
    e1.name[strcspn(e1.name, "\n")] = '\0';//adjust delimiter
    printf("Enter salary : ");
    scanf("%f",&e1.salary);

    display(e1);
}
void display(struct Employee e){

    printf("\n %d %s %.2f",e.id,e.name,e.salary);
}

