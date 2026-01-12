// Write a program to sort 10 city names stored in two dimensional arrays, 
// taken from the user.
#include<stdio.h>
#include<string.h>
void SortCity(char s[10][20],int size);
void swap(char *,char *);
void swap(char *x,char *y)
{
    char temp[20];
    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);
}
int main()
{
    char str[10][20]={"Nagpur","Pune","Amravati","Banglore","Noida","Delhi","Goa","coimbatore","Bhubneshwar","Kolkata"};
    SortCity(str,10);

    for(int i=0;i<10;i++){
        printf("%s",str[i]);
        printf("\n");
    }
       
    printf("\n");
    return 0;
}
void SortCity(char s[10][20],int size){
    // selection sort 
    for(int i=0;i<size-1;i++)
    {   
        int min=i;
        for(int j=i+1;j<size;j++)   
        {
            if( strcasecmp(s[j],s[min]) < 0 )// to handle case sensitive comparision
                min=j;
        }
        swap(s[i],s[min]);
    }
}
