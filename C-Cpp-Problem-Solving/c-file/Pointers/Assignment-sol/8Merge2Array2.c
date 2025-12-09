// Write a function to merge two arrays in a given array in sorted manner. 
// both array are soted in non-decending order 
// [void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)];
// logic : start loop from end 
// works when, array has free space at end ex:arr1
#include<stdio.h>
void merge(int *arr1,int size1,int *arr2,int size2);
int main()
{
    int arr1[]={1,3,4,0,0,0,0};
    int arr2[]={2,4,6,8};
    int size1, size2;

    size1=3; // 5*4/4 = 5
    size2=sizeof(arr2)/sizeof(arr1[0]); // 4*4/4 = 4

    printf("s1,s2 %d %d",size1,size2);

    merge(arr1,size1,arr2,size2);
            printf("\nMerged Array 3 : ");
    for(int i=0;i<size1+size2;i++)
        printf("%d ",arr1[i]);

    return 0;
}
void merge(int *ar1,int s1,int *ar2,int s2)
{
    int i=s1-1,j=s2-1,k=s1+s2-1;
    while(i >= 0 && j >= 0) 
    {
        if(ar1[i]>ar2[j])
        {
            ar1[k]=ar1[i];
            i--;
            k--;
        }
        else    
        {
            ar1[k]=ar2[j];
            j--;
            k--;
        }
    }
      // copy remaining nums2 elements (if any)
    while (j >= 0)
        ar1[k--] = ar2[j--];

}