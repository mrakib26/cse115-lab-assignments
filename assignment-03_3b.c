/*
Write down a program that will take a string as input and will check whether this is a
palindrome or not. A palindrome is a sentence which remains same if taken backward. For
example EYE is a palindrome because if you read opposite it remains the same EYE. Do it in the
following ways:
b. Not using any library functions except the gets and strlen
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
    char str[100];
    int len, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    for(len = 0; str[len] != '\0'; len++); 

    for(int i = 0; i < len / 2; i++) {
        if(tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}