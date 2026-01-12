// Write a program to find the number of vowels in each of the 
// 5 strings stored in two dimensional arrays, taken from the user.
/*
5 Sting :hello 
        this 
        is 
        not a
        game 
find vowel : 2, 1, 1, 2, 1
*/
#include<stdio.h>
#include<string.h>
void FindVowel(char [5][20], int);
int main()
{
    char str[5][20]={"hello","this","is","not a","game"};   
   
    FindVowel(str,5);
    return 0;
}
void FindVowel(char s[4][20], int size)
{   
         
     for(int i=0;i<size;i++)
     {
        int count = 0 ;
        for(int j=0;s[i][j];j++)
        {   
            char vowel = s[i][j];
            if( vowel =='a' || vowel =='e' || vowel =='i' || vowel =='o' || vowel=='u' || vowel=='A' || vowel=='E' || vowel=='I' ||  vowel=='O' || vowel=='U')
            {
                count++;
            }
        }
        printf("\n%s -> %d vowels ",s[i],count);
     }
    // [0][20]= Hello
    // [1][20]= this 
    // [2][20]= is
    // [3][20]= not a
    // [4][20]= game
}