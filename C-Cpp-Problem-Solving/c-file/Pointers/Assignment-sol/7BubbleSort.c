// Write a function to sort an array of int type values. 
// [ void sort(int *ptr, int size); ]
/*
// sort array

//edge case:it always runs all passes even when the 
             array is already sorted.
             sol: use swapped variable for identifying the swap in passes

*/
#include<stdio.h>
void swap(int *,int*);
void BubbleSort(int *,int);
int main()
{
    int arr[] = {64,34,25,12,22,11,90};
    int n= sizeof(arr) / sizeof(arr[0]);// 7*4/4 = 28/4 = 7

    BubbleSort(arr,n);
    printf("Sorted array: \n");
   //print array
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
void BubbleSort(int *ptr,int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        // initialize to 0 
        int swapped = 0;// check if array is sorted 
        for(j=0;j<size-i-1;j++)
        {
            if(ptr[j]>ptr[j+1]){
                swap(&ptr[j],&ptr[j+1]);
                // atleat 1 swap occure
                swapped=1;
            }   
        }
    // if no swap in entire pass, Array is sorted
        if(swapped==0)
            break;
    }

}
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}