//Write a function to count Frequency of each elements.
// Write a function to print all unique elements in an array.
// input : 10 20 10 20 30 40 20 30
// sort  : 10 10 20 20 20 30 30 40
// output: 
/*         10:2
           20:3
           30:2
           40:1
*/

#include<stdio.h>
void sort(int [],int);
void Frequency(int [],int);
int main()
{
    int a[20],i,size ;
    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter n elements: ");
    for(i=0;i<size;i++) 
        scanf("%d",&a[i]);

    Frequency(a,size);
    return 0;
}
void sort(int a[],int s)
{
    int i,temp;
    for(int r=0;r<=s-1;r++){
        for(i=0;i<=s-2-r;i++)// 10 20 10 20 40 40 20 30
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    

}
void Frequency(int A[],int S)
{
    sort(A,S); // 10 10 20 20 20 30 30 40
    int count,i,j;
    i=0,j=1;
    while(i<S)
    {
        count=1;
        while(j < S  && A[i]==A[j])
        {
            count++;
            j++;
        }
        printf("%d occured %d times \n",A[i],count);
        i=j;
        j++; 
    }
}
