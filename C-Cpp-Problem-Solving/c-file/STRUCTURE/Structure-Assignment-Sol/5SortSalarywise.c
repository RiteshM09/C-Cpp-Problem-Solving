// Write a function to sort employees according to their salaries 
// [ refer structure from question 1]
// Selection Sort
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
void swap(struct Employee *x,struct Employee *y);
void SortSalaryWise(struct Employee *,int);
void swap(struct Employee *x,struct Employee *y)
{
    struct Employee temp = *x;
    *x=*y;
    *y=temp;
}

void SortSalaryWise(struct Employee *staff,int size){
    //selection sort
    for(int i=0;i<size;i++)
    {
        int minSalary=i; // assign 1st index to min 
        
        // now find min salary
        //& put min salary frm j index
        for(int j=i+1;j<size;j++){
            if(staff[j].salary<staff[minSalary].salary)
                minSalary=j;
        } 

        if(minSalary!=i){
             swap(&staff[minSalary], &staff[i]);
        }
           
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
    SortSalaryWise(staff,size);

    for(int i=0;i<size;i++)
        printf("\n %d %s %2.f",staff[i].id,staff[i].name,staff[i].salary);
    return 0;
}
//3 45 28 50 35
//50 45 35 28 3 
//selection sort.
// void SortSalaryWise(struct Employee *staff,int size){
//     int i,j, minSalary;
//     for(i=0;i<size-1;i++)// i to read each element
//     {
//         minSalary=i;
//         for(j=i+1;j<size;j++)
//             if(staff[j].salary < staff[minSalary].salary)
//                 minSalary=j;
        
//         if(minSalary!=i){
//             struct Employee temp=staff[minSalary];
//             staff[minSalary]=staff[i];
//             staff[i]=temp;
//         }
//     }
// }