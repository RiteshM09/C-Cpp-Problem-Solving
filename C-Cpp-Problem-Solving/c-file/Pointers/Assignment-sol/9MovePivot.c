// Write a function to move first value of the array
// to the position where all smaller values will be 
// in the left and greater values will be in the right.
/*

input : arr = [23, 67, 89, 11, 35, 42, 59, 16, 8 , 81]
Output: arr = [8 , 11, 16, 23, 35, 42, 59, 89, 67, 81]
        pivot final index = 3

input : arr = [20, 10,  5, 30, 25]
Output: arr = [ 5, 10, 20, 30, 25]
        pivot final index = 2 

input : arr = [3, 1, 2]
Output: arr = [2, 1, 3]
        pivot final index = 2

input : arr = [50, 10, 20, 30]
Output  arr = [30, 10, 20, 50]
        pivot final index = 3

*/
#include<stdio.h>
void swap(int *,int *);
int MoveValue(int*,int);
int main()
{
    int Arr[]={23, 67, 89, 11, 23, 42, 59, 16, 8 , 81};
    int size;
    size = sizeof(Arr) / sizeof(Arr[0]);
    
    MoveValue(Arr,size);

    printf("\nNew array: ");
    for(int i=0;i<size;i++)
        printf("%d ",Arr[i]);
    
}
int MoveValue(int *A,int n){
    int i,pivot=0,left=1;

    for(i=1;i<n;i++){
        if(A[i]<A[pivot]){// if read pointer(i) is smaller than pivot, then swap left with read (i)pointer
                swap(&A[i],&A[left]);
                left++;
        }
    }
    //now after loop ends left pointer is at element 
    //which is greater than pivot
    //so swap its previous value(left-1 index)
    swap(&A[pivot],&A[left-1]);
    printf("Pivot is at index: %d",left-1);
    return *A;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
