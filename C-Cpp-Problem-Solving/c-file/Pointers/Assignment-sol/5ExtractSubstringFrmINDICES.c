/*Write a function to extract a substring from a given string 
with specified start index (inclusive) and end index (exclusive),
 and store the extracted string in another char array. 
 [void extract_string(char *str, int start_index, int end_index, char *result);]

Input string: "HELLO WORLD"
start_index: 0
end_index: 5
Expected result: "HELLO"

Input string: "PROGRAMMING"
start_index: 3
end_index: 7
Expected result: "GRAM"

Input string: "DATA"
start_index: 0
end_index: 4
Expected result: "DATA"

*/
#include<stdio.h>
#include<string.h>
void extract_string(char *str, int start_index, int end_index, char *result);
int main()
{
    char str[50],substring[50];
    int start,end;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';    // 012345 6, return 6, as \n is present at 6 
                                    // ritesh\n
    printf("Enter start index ");
    scanf("%d",&start);

    printf("Enter end index ");
    scanf("%d",&end);

    extract_string(str,start ,end ,substring);
    printf("%s",substring);

    return 0;
}
void extract_string(char *str, int start_index, int end_index, char *result){
    int j=0;
    for(int i=start_index;i<=end_index;i++)
    {
        result[j]=str[i];
            j++;
    }   
    result[j]='\0';// always add null at last position for safety
}