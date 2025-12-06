// Write a function to find the highest salary employee 
//from a given array of 10 employees. [Refer structure from question 1]

// Define a structure Employee with member variables id, name, salary
// Write a function to take input employee data from the user.
#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
struct Employee Highest_Salary(struct Employee staff[],int totalEmployee);
void input(struct Employee *e_ptr, int index );
// void displayAllEmployees(struct Employee staff[],int total);
int main()
{
    struct Employee staff[50];
    int totalEmployee=5;
    // enter 10 employee data;
    printf("Enter Employee Details: \n");
    for(int i=0;i<totalEmployee;i++){
        input(&staff[i],i);// pass address and element i
    }

    // displayAllEmployees(staff,totalEmployee);
    struct Employee max = Highest_Salary(staff,totalEmployee);
    printf("\nmax salary is of employee : %s",max.name);

    return 0;
}

void input(struct Employee *e_ptr, int index ){

    printf("\n %d Employee : ",index+1);
        
        printf("Enter id: ");
        scanf("%d",&e_ptr->id);
        fflush(stdin);

        printf("Enter name: ");
        fgets(e_ptr->name,10,stdin);
        e_ptr->name[strlen(e_ptr->name)-1] = '\0';

        printf("Enter salary: ");
        scanf("%f",&e_ptr->salary);
}

// void displayAllEmployees(struct Employee staff[],int total){
//     printf("\n\n--- Displaying 10 Employees Data ---\n");
//     for(int i=0;i<total;i++)
//     {
//         printf("\n Employee %d:\n ",i+1);

//         printf(" ID: %d \n",staff[i].id);
//         printf(" Name: %s \n",staff[i].name);
//         printf(" Salary: %2.f \n\n",staff[i].salary);
//     }

// }
struct Employee Highest_Salary(struct Employee staff[],int totalEmployee)
{
    struct Employee max;
    max=staff[0];

    for(int i=1;i<totalEmployee;i++)
    {
        if(staff[i].salary>max.salary){
            max=staff[i];
             
        }
            
    }
    return max;
}   