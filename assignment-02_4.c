/*
Ask user for a positive integer n and then create and  display a n x n diagonal matrix as follows: 
Sample run: 
            0 0 0 1 
            0 0 1 0 
            0 1 0 0 
            1 0 0 0 
*/

#include<stdio.h>
int main()
{
    int n; 
    printf("Enter a positive integer n: "); 
    scanf("%d", &n); 

    int a[n][n]; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i+j == n-1) {
                printf("1 "); 
            }
            else {
                printf("0 "); 
            }
        }
        printf("\n"); 
    }

    return 0; 
}