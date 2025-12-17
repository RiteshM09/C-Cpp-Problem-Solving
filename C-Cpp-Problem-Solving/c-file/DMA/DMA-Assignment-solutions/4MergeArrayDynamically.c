//4. Write a function to merge two Sorted array elements and 
//store it in dynamically created array. 
//Return address of this dynamically created array.
#include<stdio.h>
#include<stdlib.h>
int* Merger2Array(int [],int ,int [],int);
int main()
{
    int arr1[]={10,12,15,18,25,37};
    int arr2[]={11,12,24,35,40};
    int *ptr;

    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    ptr = Merger2Array(arr1, size1, arr2, size2);
    
    if (ptr == NULL)// if memory allocation fails
    return 1;

    for(int i=0;i<size1+size2;i++)
        printf("%d ",ptr[i]);

    free(ptr);
    ptr=NULL;
    return 0;
}
int* Merger2Array(int a[],int s1,int b[],int s2)
{
    int i=0,j=0,k=0;

    int *c = (int *)malloc(sizeof(int) * (s1+s2) );
    
    if(c==NULL)
    {
        printf("MEMORY allocation failed !");
        return NULL;
    }

    while(i<s1 && j<s2)
    {
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        } 
        else{
            c[k]=b[j];
            k++;
            j++;
        }      
    }
    // here at j=5 loop ends as b array is smaller in size.
    // so put remaining a array sorted element to c array
    while(i<s1 )
    {
        c[k]=a[i];
        i++;
        k++;
    }
    // if a is smaller then put remaining b sorted elements in C array
    while(j<s2)
    {
         c[k]=b[j];
         j++;
         k++;
    }
    return c;
}