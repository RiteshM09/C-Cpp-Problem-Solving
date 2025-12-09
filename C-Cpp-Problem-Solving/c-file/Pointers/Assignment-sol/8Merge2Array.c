// Write a function to merge two arrays in a given array in sorted manner. 
// both array are soted in non-decending order 
// [void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)];
#include<stdio.h>
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3);
int main()
{
    int arr1[]={1,3,4,5,9,9};
    int arr2[]={2,4,6,8};
    int size1, size2, arr3[50];

    size1=sizeof(arr1)/sizeof(arr1[0]); // 5*4/4 = 5
    size2=sizeof(arr2)/sizeof(arr1[0]); // 4*4/4 = 4

    printf("s1,s2 %d %d",size1,size2);

    merge(arr1,size1,arr2,size2,arr3);
            printf("\nMerged Array 3 : ");
    for(int i=0;i<size1+size2;i++)
        printf("%d ",arr3[i]);

    return 0;
}
void merge(int *ar1,int s1,int *ar2,int s2,int *arr3)
{
    int i=0,j=0,k=0;
    while(i<s1 && j<s2)
    {
        if(ar1[i]<ar2[j]){
            arr3[k]=ar1[i];
            i++;
        }
        else{
            arr3[k]=ar2[j];
            j++;
        }
    k++;
    }
    // only small array is sorted i.e ar1 
    // and arr2 elements are still in unsorted 
    //then sort the elements which are larger in size.
    while(i<s1)
    {
        arr3[k]=ar1[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        arr3[k]=ar2[j];
        j++;
        k++;
    }

}

//start to end logic 