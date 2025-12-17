// input grades of student using malloc 
/*
input: Enter number of grades : 5
output:
Enter grade 1:A
Enter grade 2:B 
Enter grade 3:C
Enter grade 4:A
Enter grade 5:F
A B C A F

input: Enter number of grades : 2
output:
Enter grade 1:A
Enter grade 2:A
A A


note:
Line	                Purpose
if(grades == NULL)	    Stop program if memory allocation failed
free(grades)	        Release heap memory
grades = NULL	        Prevent dangling pointer

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int numbers = 0;
    printf("ENTER NUMBER OF GRADES: ");
    scanf("%d",&numbers);
    
    //grades is a pointer that should point to heap memory.
    char *grades = malloc(sizeof(char) * numbers);
    //What malloc does
    //If memory allocation succeeds → returns address
    //If it fails → returns NULL

    if(grades == NULL)
    {
        printf("MEMORY ALLOCATION FAIL \n");
        return 1;
    }

    for(int i=0;i<numbers;i++){
        printf("Enter grades :#%d: ",i+1);
        scanf(" %c",&grades[i]);
    }
       
    
    for(int i=0;i<numbers;i++)
        printf(" %c, ",grades[i]);
    
    
    free(grades);
    //Memory is released back to system
    //BUT the pointer still holds the old address
    //That pointer is now dangling
    // (dangling pointer : pointer pointing to a Memory location that is been freed/Deleted)
    
    grades = NULL;// Pointer no longer points to freed memory, Now it points to nothing
    

    return 0;
}