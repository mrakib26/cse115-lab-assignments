/*
Take input of a NxN matrix and display the sum of its main diagonal element. N will also be 
input. Example: For the following matrix, your program should display 12. (Because 5+3+4 = 12) 
            5 2 1 
            0 3 7 
            6 8 4
*/

#include<stdio.h>
int main()
{
    int N, sum = 0;; 

    printf("Enter the size of the matrix (N): "); 
    scanf("%d", &N); 

    int matrix[N][N];

    printf("\nEnter the elements of the matrix: \n"); 
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &matrix[i][j]); 
            if(i==j) {
                sum = sum + matrix[i][j]; 
            }
        }
    }
    printf("Sum of the main diagonal elements: %d\n", sum); 

    return 0;
}