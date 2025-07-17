//10. Write a function to count the frequency of each element of an array.
// input - 
// array size - 5
//          4 3 2 3 4
//  4 appears 2 times
//  3 appears 2 times 
//  2 apperas 1 times

#include<stdio.h>
void CountFrequency(int A[],int );
int main()
{
    int a[20],i,s;
    printf("Enter array size: ");
    scanf("%d",&s);

    printf("Enter array Elements: ");
    for(i=0;i<=s-1;i++)
        scanf("%d",&a[i]);
    
    CountFrequency(a,s);
    
    
    return 0;
}
void CountFrequency(int A[],int size){
    int i,r,temp,j,count;

    for(r=0;r<size;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    // sorted the array
    printf("Sorted array:");
    for(i=0;i<size;i++)
        printf("%d ",A[i]);

    i=0;j=0,count=0; // i for unique element , j to compare how many times it appears in next index
    while(i<size)
    {
        while(A[i]==A[j] && j<size) // compare both 
        {
            count++; // count how many times j appears
            j++; //  increase j to compare next index  with i  
        }
        printf("\n %d Appears %d times",A[i],count);
    i=j; // move to next element 
    count=0; // reset count for next unique element 
    }


}