#include <stdio.h>
#include <math.h>
#define g 9.81
int main()
{
    float h, t;

    printf("Enter height (in meters): ");
    scanf("%f", &h);

    if (h < 0) {
        printf("Height cannot be negative.\n");
    } else {
        t = sqrt((2*h)/g);
        printf("Falling time = %.2f seconds\n", t);
    }

    return 0;
}

