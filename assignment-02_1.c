/*
Declare a 2D array and initialize it with the following values at the time of declaration (no scanf). 
Finally display its content in the following format. 
            78  83  82 54 
            81  80  23 14 
            11  20  31 11 
            56  79  31 90 
            32  45  56 87 
*/

#include<stdio.h>
int main()
{
    int a[][4] = {
        {78, 83, 82, 54},
        {81, 80, 23, 14},
        {11, 20, 31, 11},
        {56, 79, 31, 90},
        {32, 45, 56, 87}
        }; 

    for(int i=0; i<5; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");
    }

    return 0;
}