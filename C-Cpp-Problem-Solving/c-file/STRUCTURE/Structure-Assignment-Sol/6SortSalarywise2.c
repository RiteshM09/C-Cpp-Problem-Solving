//// Write a function to sort employees according to their salaries 
// [ refer structure from question 1]
//Bubble sort
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
void swap(struct Employee *,struct Employee *);
void swap(struct Employee *x,struct Employee *y)
{
    struct Employee temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort_Salary(struct Employee *staff,int n){
    int i,j;// where i is to read all element and 
            // j is to compare all
    for(i=0;i<n;i++)
    {
        int swapped=0;
        for(j=0;j<n-i-1;j++){// no of comparision with i
             if(staff[j].salary > staff[j+1].salary)// check larger sal using .salary
                swap(&staff[j],&staff[j+1]);// now swap the entire struct Employee, NOT just salary.
        swapped=1;
        }

        if(swapped==0)
            break;
    }
}
int main()
{
    struct Employee staff[10] = {
        {1, "Amit", 30000},
        {2, "Raj", 45000},
        {3, "Sneha", 28000},
        {4, "Vikram", 50000},
        {5, "Pooja", 35000},
        {6, "Ravi", 30000},
        {7, "Karan", 22000},
        {8, "Neha", 40000},
        {9, "Tina", 38000},
        {10, "Rohan", 32000}
    } ;

    int size = sizeof(staff)/sizeof(staff[0]);
    BubbleSort_Salary(staff,size);

    for(int i=0;i<size;i++)
        printf("\n %d %s %2.f",staff[i].id,staff[i].name,staff[i].salary);
    return 0;
}
