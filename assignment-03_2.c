/*
Write a program in C to print individual characters of string in reverse order.
Test Data:
        Input the string : resource.com
Expected Output:
        The characters of the string in reverse are: m o c . e c r u o s e r
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100]; 
    printf("Input the string: ");  
    gets(str); 

    int len = strlen(str); 
    printf("The characters of the string in reverse are: ");

    for(int i=len-1; i>=0; i--) {
            printf("%c ", str[i]);
    }

    printf("\n");
    return 0;
}