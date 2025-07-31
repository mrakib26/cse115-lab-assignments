/*
Write a C program that will take three words as input and will print them in sorted
order, i.e., in the order they appear in the dictionary. [Hints: Use strcmpi multiple times]
Input/output:
    Input a word: orange
    Input another word: apple
    Input another word: coconut
Expected Output:
                apple
                coconut
                orange
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char w1[100], w2[100], w3[100], temp[100];
    printf("Input a word: ");
    gets(w1); 
    printf("Input another word: ");
    gets(w2);
    printf("Input another word: ");
    gets(w3);

    if(strcmpi(w1, w2) > 0) {
        strcpy(temp, w1);
        strcpy(w1, w2); 
        strcpy(w2, temp); 
    }
    if(strcmpi(w1, w3) > 0) {
        strcpy(temp, w1);
        strcpy(w1, w3);
        strcpy(w3, temp);
    }
    if(strcmpi(w2, w3) > 0) {
        strcpy(temp, w2);
        strcpy(w2, w3);
        strcpy(w3, temp);
    }

    printf("\nSorted words:\n");
    printf("%s\n%s\n%s\n", w1, w2, w3);

    return 0;
}