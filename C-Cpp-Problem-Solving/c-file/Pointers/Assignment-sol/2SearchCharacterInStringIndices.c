/*Write a function to search all occurrences of a 
given character in a given string.
Result of search is a list of indices 
to be stored in the given array. 
[ void search_all _occurrences(char *str, char ch, int *arr); 
*/
/*
input : programming is fun 
        search: g 
output :(Indices found / arr): 3, 10
*/
#include<stdio.h>
#include<string.h>
void Search_all_occurrences(char *str, char ch, int *arr);
int main()
{
    char s[50],ch;
    int arr[50];
    printf("Enter string: ");
    fgets(s, 50, stdin);
    s[strlen(s)-1] = '\0';

    printf("Enter character to search: ");
    scanf("%c", &ch);

    s[strlen(s)-1]='\0';
    Search_all_occurrences(s, ch, arr);

}
void Search_all_occurrences(char *str, char ch, int *arr){// pass by referece 
    int i,j=0;
    for(i=0;str[i];i++) 
    {
        if(ch==str[i]){
            arr[j]=i;
            j++;
        } 
    }

    printf("Output (Indices found): ");
    for(int k=0;k<j;k++)
        printf("%d ",arr[k]);
    
}