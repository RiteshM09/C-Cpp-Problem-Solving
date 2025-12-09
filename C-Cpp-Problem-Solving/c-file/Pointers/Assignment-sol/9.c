// Write a function to move first value of the array
// to the position where all smaller values will be 
// in the left and greater values will be in the right.
/*

input : arr = [23, 67, 11, 35, 42, 59, 16, 8, 81]
Output: arr = [11, 16, 8 ,23, 67, 35, 42, 59, 81]
        pivot final index = 3

input : arr = [20, 10, 5, 30, 25]
Output: arr = [10, 5, 20, 30, 25]
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
    int Arr[]={20,10,5,30,25};
    int size;
    size = sizeof(Arr) / sizeof(Arr[0]);
    MoveValue(Arr,size);

    printf("New array: ");
    for(int i=0;i<size;i++)
        printf("%d ",Arr[i]);
}
int MoveValue(int *A,int n){
    int pivot=0,left, right=n-1;
    // greater val is in right

    while(left<right)
    {
        while(){
           
        }
    }
    
    return *A;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
