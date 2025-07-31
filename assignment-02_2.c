/*
Ask user for number of rows M and number of columns N. Based on the input, declare two 2- 
dimensional arrays of size M X N. Now implement the following tasks: 
i) Take input for both arrays. 
ii) Output the arrays as form of matrix. 
iii) Calculate the sum and store the sum in another 2D array of same dimension. Display the sum.
*/

#include<stdio.h>
int main()
{
    int M, N; 
    printf("Enter number of rows: "); 
    scanf("%d", &M);
    printf("Enter number of columns: ");
    scanf("%d", &N);

    int a[M][N], b[M][N], sum[M][N];

    printf("Enter elements for first array:\n");
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &a[i][j]); 
        }
    }

    printf("Enter elements for second array:\n");
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &b[i][j]); 
        }
    }

    printf("First array: \n"); 
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Second array: \n"); 
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", b[i][j]); 
        }
        printf("\n");
    }

    printf("\nSum: \n"); 
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}