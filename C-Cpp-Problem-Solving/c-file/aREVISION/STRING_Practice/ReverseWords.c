#include<stdio.h>
#include<string.h>
char* TrimSpaces(char*);
char* ReverseFullString(char*);
char* reverseWords(char* );
int main()
{
    char s[] = "a good   example  ";
   printf("%s",reverseWords(s));
    return 0;
}
char* reverseWords(char* s) {
    if (!s) return NULL;
    TrimSpaces(s);
    ReverseFullString(s);

    char ch;
    int i=0,start,end;
    while(s[i]!='\0'){

       
    while (s[i] == ' ') i++;// skip leading space

    if (s[i] == '\0') break;   // stop if at end    
     start=i;// start is first index of non-space character

        while(s[i]!='\0' && s[i]!=' ')//move i to spacing char or last 
            i++;
        
        end=i-1;// end is at, last non-space character

        while(start<end)
        {
            ch=s[start];
            s[start]=s[end];
            s[end]=ch;

            start++;
            end--;
        }
    
        i++;// move to next word
    }

    return s;
}
char* TrimSpaces(char* s)
{
    if (!s) return NULL;

    int i=0,j=0,len;
    len=strlen(s);
    // for empty string
     if (i == len) {
        s[0] = '\0';
        return s;
    }
    // remove leading spaces
    while(s[i]==' ') // trim from statring, increment i
        i++;
    // compress mid spaces
    while(s[i]!='\0'){

        if(s[i]!=' '){ //if char is non-space
            s[j]=s[i];
            j++;
        } 
        else {// if char is space
            if(j>0 && s[j-1]!=' '){// check if prev char write(i/j) char is non-space then only shift space otherwise not  
                 s[j]=' '; 
                 j++;  // increment j only to shif space other wise dont
            }
              
        }
        i++;
    }
    // j is at j-1 index & i is at '\0'
    // j=j-1;
    for(;j>0 && s[j-1]==' ' ;j--);// last char is j-1 i.e 9th index

    s[j]='\0';// place null after last character/after last index

    return s;

}
char* ReverseFullString(char* s1){
    if (!s1) return NULL;

    char ch;
    int i,len=strlen(s1);
    for(i=0;i<len/2;i++){
        ch=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=ch;
    }

    return s1;
}