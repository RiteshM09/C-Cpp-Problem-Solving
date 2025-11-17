// Write a function to print all unique elements in an array.
// input : 10 20 10 20 30 40 20 30
// sort: 10 10 20 20 20 30 30 40
// output: 40
#include<stdio.h>
void Print_unique(int A[],int);
int main()
{
    int s,a[20],i;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    Print_unique(a,s);
    return 0;
}
void Print_unique(int A[],int size){
    int i,temp;
    for(int r=0;r<size;r++){
        for(i=0;i<size-1-r;i++){
            if(A[i]>=A[i+1])
                {
                    temp=A[i];
                    A[i]=A[i+1];
                    A[i+1]=temp;
                }
        }
    }
    printf("Sorted array: ");
        for(i=0;i<size;i++)
            printf("%d ",A[i]);

    printf("\nUnique items are:");
    i=0;
    if(A[i]!=A[i+1]) // check for First_element, if first_Element == next_element
        printf("%d ",A[i]); 
    i=1;
    while(i<=size-2){// check for second to second last element
        if(A[i]!=A[i+1] && A[i]!=A[i-1])
            printf("%d ",A[i]);
            
        i++;

    }
    if( A[size-1]!=A[size-2])// check for Last element if LAST_ELEMENT == PREV_Element
        printf(" %d",A[size-1]);

}