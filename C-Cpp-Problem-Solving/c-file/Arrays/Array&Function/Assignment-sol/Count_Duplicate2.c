// Write a function to count a total number of duplicate elements in an array. 
//(Means elements that occurs 2 times in an array)
//  5 2 3 1 1 2 1 1 4 3 5
// total duplicate: 3

// sort array
//  1 1 1 1 2 2 3 3 4 5 5 
// check duplicate
// if a[i]==a[i+1] 
//  if found return  
// count the number of returned value  
// temp=a[i];
#include<stdio.h>
int Count_Duplicate(int A[],int);
int main()
{
    int s,a[20],P,D,i;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    Count_Duplicate(a,s);
    return 0;
}
int Count_Duplicate(int A[],int size){
 // sort array
 int i,r,temp,j,count=0;
 for(r=0;r<size;r++)// for each element r-0-size-1
 {
    for(i=0;i<size-1;i++){
        if(A[i]>A[i+1]){
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }    
    }
 }
    //Array is sorted
    //Count duplicate
    for(i=0;i<size;i++)
        printf("%d ",A[i]);

    printf("\n");

    i=0;
    while(i<=size-2)
    {
        if(A[i]==A[i+1]){
            count++;
        temp=A[i];
        while(temp==A[i] && i <= size-1) 
            i++;
        }
        else{
            i++;
        }      
    }
        printf("Count of Duplicate items occuring more than 2 time are: %d ",count);

    return 0;
}
