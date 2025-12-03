/*Write a function to search all occurrences of a 
given character in a given string.
Result of search is a list of indices 
to be stored in the given array. 
[ void search_all _occurrences(char *str, char ch, int *arr); 
// return -1 at end of list(after last index)
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
    char s[50];
    int arr[50],ch,ans;

    fgets(s,50,stdin);

    s[strlen(s)-1]='\0';
    ans=Search_all_occurrences(s, ch, arr)
    printf("\nOutput (Indices found): %d",ans);

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

    return arr;
}