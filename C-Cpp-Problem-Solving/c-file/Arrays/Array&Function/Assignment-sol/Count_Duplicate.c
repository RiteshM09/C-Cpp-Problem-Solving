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

    
    printf("Count of Duplicate items occuring more than 2 time are: %d ",Count_Duplicate(a,s));
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
        i=0,j=1;
        while(i<=size-2) // i is previous value than j(size-1) i.e(i=size-2)
            {
                if(A[i]==A[j])// even i==j appears 2 or more times still count it as 1
                    count++;

                 while(A[i]==A[j])// increment j till duplicate found, before: count+1 time and j more to next index
                    j++;

            i=j; // before incrementing j make i as j, so that i should be in previous index than j 
            j++; // increment j to next index 
            }

        

    return count;
}

// 8
// 0 1 2 3 4 5 6 7 index
// 2 2 3 3 2 2 4 4  
// sorted
// 2 2 2 2 3 3 4 4 i=0 -> n-1
// i=2
// j=22233344 j=1 - n-1

// i=2
// j=22233344 , count=

// i=2 
// j=22233344

// i=2
// j=22233344

// i=3
// j=22233344

// i=3
// j=22233344

// i=4
// j=22233344

// i=4
// j=22233344

