/*
Write a function to rotate an array by n position in d direction. 
The d is an indicative value for left or right. 
(For example, if array of size 5 is [32, 29, 40, 12, 70];  n is 2
and d is left, 
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
// Input size - 5
// Enter element: 32 29 40 12 70 
// enter n and d:
#include<stdio.h>
void RotateArray(int A[],int n,int p,int d);
int main()
{
    int s,a[20],P,D,i;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    
    printf("Enter rotating position n: ");
    scanf("%d",&P);
    
    printf("Enter Direction (L,R):(-1,1) : ");
    scanf("%d",&D);

    RotateArray(a,s,P,D);
    return 0;
}
void RotateArray(int A[],int S,int n,int d) // arr, size, Position, direction 
{
    int i,flag;
     for(int r=0;r<n;r++)
     {
       if(d==1) //Right direction 
       {
        flag=A[S-1];
        for(i=S-1;i>0;i--){//shifting array from second last to last position then after loop end first value is replaced by last 
            
              A[i]=A[i-1]; //a[2]=a[1]   32 32 0 0 0 || 32 29 40 12 70
        }
        A[0]=flag; 
    
        
       }
       else if(d==-1){ //postion L, Size S=5, Direction d=2 , A[] = {32, 29, 40, 12, 70}
        flag=A[0];
        for(i=0;i<=S-2;i++) // i=, flag=32 , S=5, a[0]=29 a[1]=29 A[5]={29, 40, 12, 12, 32}
        {
            A[i]=A[i+1];//
        }
        A[S-1]=flag;//return first element value to last element
       }

     }

   for(i=0;i<S;i++)
   printf("%d ",A[i]);
        
}   