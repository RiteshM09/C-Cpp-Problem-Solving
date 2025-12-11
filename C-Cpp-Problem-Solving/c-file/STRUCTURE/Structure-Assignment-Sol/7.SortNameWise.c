//Write a function to sort employees according to their names [refer structure from que1]
/*



USE:
strcmp(a,b) < 0 → a comes before b
strcmp(a,b) > 0 → a comes after b
strcmp(a,b) == 0 → equal

*/
#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};
void swap(struct Employee *,struct Employee *y);
void SortNameWise(struct Employee [],int );

void swap(struct Employee *x,struct Employee *y){
    struct Employee temp=*x;
    *x=*y;
    *y=temp;
}

void SortNameWise(struct Employee staff[],int n){
    //sort name wise // selection sort
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++){// j starts frm next index of, for i=0, j=1 to n-1
            if( strcmp(staff[j].name, staff[minIndex].name) < 0)//staff[i].name<staff[minName].name
                {
                     minIndex=j;
                }
        }
        if(minIndex!=i)
            swap(&staff[i],&staff[minIndex]);
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

    SortNameWise(staff,size);
    printf("Name Wise Sorted : \n");
    for(int i=0;i<size;i++)
        printf("%d %s %2.f \n",staff[i].id, staff[i].name, staff[i].salary);
    return 0;
}
