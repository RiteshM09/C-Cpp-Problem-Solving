//Write a program to sort elements of an array of size 10. Take array values from the user.

// i/p - 30 10 60 40 90 70 15 20 80 50
// o/p - 10 15 20 30 40 50 60 70 80 90 

// a[0] a[1] a[2] a[3] a[4] a[5] a[6] a[7] a[8] a[9]
//  30   10   60   40   90   70   15   20   80   50

// for(i=0;i<=9;i++) if(a[i]>a[i+1]) then swap both
// round 1: 
// '10    30   40   60   70   15   20   80   50   90' - observe greater values are swapped at right
// round 2: 
// '10    30   40   60   15   20   70   50   80   90'
// round 3: 
// '10    30   40   15   20   60   50   70   80   90'
// round 4: 
// '10    30   15   20   40   50   60   70   80   90'  
// round 5: 
// '10    15   20   30   40   50   60   70   80   90'  
// round 6: 
// '10    15   20   30   40   50   60   70   80   90' 



// a[i+1] - 10 a[0]- 30
// if(a[i]>a[i+1]) then swap - a[i] with a[i+1]

// if(a[i]>a[i+1])     { swap a[i] & a[i+1] } , a[i]=10 , a[i+1]=30

// if(a[i]>a[i+1])     { swap a[i] & a[i+1] } , a[i]=10 , temp=10


#include<stdio.h>
int main()
{
    int i,a[10],r,t;
    printf("Enter 10 Array Elements = ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    printf("\nSorted values = ");
    for(r=0;r<=9;r++){ 
     for(i=0;i<=8-r;i++) // after each round the loop exclude last swapped value (the greatest one)  
     {
        if(a[i]>a[i+1]) { // a[i] 30, a[i+1] = 10 if left is greater than right array swap them
            t=a[i];
            a[i]=a[i+1]; 
            a[i+1]=t; // a[i] 10 , a[i+1] 30 
        }
     }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]); 
    }

}




