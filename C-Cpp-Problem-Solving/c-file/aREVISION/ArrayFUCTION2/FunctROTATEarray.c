/*
Write a function to rotate an array by p position in d direction. 
The d is an indicative value for left or right. 
(For example, if array of size 5 is [32, 29, 40, 12, 70];  p is 2
and d is left, 
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
TSRN
*/
// Input size - 5
// Enter element: 32 29 40 12 70 
// enter p and d:
#include<stdio.h>
void ROTATEarray(int b[],int ,int ,int );
int main()
{
    int a[10],p,d,i,s;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    printf("Enter Position p:");
    scanf("%d",&p);
    
    printf("Enter Direction d (-1,1):(L,R): ");
    scanf("%d",&d);
    ROTATEarray(a,s,p,d);

}
void ROTATEarray(int b[],int size,int Pos,int Dir)
{ 
    int i,temp,r;
    while(Pos){
    
        if(Dir==-1)
        {
            temp=b[0];
            for(i=0;i<size-1;i++)
            {
                b[i]=b[i+1];
            }
            b[size-1]=temp;
        }
        else if(Dir==1)
        {
            temp=b[size-1];
            for(i=size-1;i>0;i--)
            {
                b[i]=b[i-1];
            }
            b[0]=temp;
        }
        Pos--;
    }

    printf("Print: ");
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}