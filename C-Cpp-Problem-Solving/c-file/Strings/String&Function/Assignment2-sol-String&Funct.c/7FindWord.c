// Write a function to find word in given string
//note:"word boundaries: " A word is typically delimited by whitespace, 
//                         punctuation, or the start/end of the string. 
/*
input: Hello my name is ritesh
search : name
output: true

input: Hello my name is ritesh
search : rit
output: false 

input: "Hello World"
search : "world"
output: false

input:"Is this, a test?"
search : "this"
output: true
*/
#include<stdio.h>
#include<string.h>
int findWord(char [],char []);
int main()
{
    char s[50],word[50];
    printf("Enter a string:");
    fgets(s,50,stdin);

    printf("Enter a character:");
    scanf("%s",word);

    s[strlen(s)-1]='\0';


    int index1 = findWord(s,word);
    int index2 = findWord(s,word);

    printf("'%s' found at index: %d\n", word, index1); // Output: 6
    printf("'%s' found at index: %d\n", word, index2); // Output: -1


}
int findWord(char str[],char Word[]){

    int i,slen,wlen,end;
           if (wlen == 0)
                return 0;

    slen=strlen(str);               //     |
    wlen=strlen(Word);              //     every
    end=slen-wlen+1; // string = hello every one, word = every, slen=15,sword=5 
                    // last index of end: at y(index 11) in string, i.e slen-wlen+1(15-5+1)
    //find lenght of word 

    for(i=0;i<end;i++)
    {   
        //check if 1st char of word matches in full String
        if(str[i]==Word[0]){
            int j = 0;
            while(j < wlen && str[i + j] == Word[j]) {
                j++;
            }
            if (j == wlen) {
                return i; // Return the starting index of the match
            }
        }
    }
     return -1; // Return -1 if the word is never found

}