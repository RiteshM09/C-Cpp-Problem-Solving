// Write a function to remove duplicate names stored in the list of names stored in a
//  2d char array.
/*
input : names[][20] = {Aman, Kim, Aman, Lee, Ritesh, Lee, Aman, Lee };

        names[][20] = {Aman, Kim, Lee, Ritesh};
*/
#include <stdio.h>
#include <string.h>
#include <strings.h>
int RemoveDuplicates(char names[][20],int count);
void SortNames(char s[][20], int);
int RemoveDuplicates(char names[][20],int count)
{
    int i=0, run;
    for(int run=1;run<count;run++)
    {
        if(strcasecmp(names[i],names[run])!=0)
        {
            i++;
            strcpy(names[i],names[run]);
        }

    }

    // return new size of array after removing duplicate ( i+1 )
    return i+1;
}
int main()
{
    char names[][20] = {"Aman", "Kim", "Aman", "Lee", "Ritesh", "Lee", "Aman", "Lee"};

    int count = sizeof(names) / sizeof(names[0]); // 20 / 1
    
    SortNames(names, count);

    int newCount = RemoveDuplicates(names,count);
    
    for (int i = 0; i < newCount; i++)
        printf("%s\n", names[i]);

    return 0;
}

void swap(char *,char *);
void swap(char *x, char *y) {
    char temp[20];
    memcpy(temp, x, 20);
    memcpy(x, y, 20);
    memcpy(y, temp, 20);
}

void SortNames(char s[][20], int size)
{
    // selection sort
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(s[j], s[min]) < 0) // to handle case sensitive comparision
                min = j;
        }
        swap(s[i], s[min]);
    }
     
}


