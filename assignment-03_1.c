/*
Write a program in C to convert a string to uppercase using library function.
Test Data:
        Input a string in lowercase: the quick brown fox jumps over the lazy dog.
Expected Output:
        Here is the above string in UPPERCASE: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
    char str[100]; 
    printf("Input a string in lowercase: ");  
    gets(str); 

    for(int i=0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);     
    }

    printf("\nHere is the above string in UPPERCASE:\n%s\n", str);
    return 0;
}