#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    int fine1 = 0;
    if(y1 == y2 && m1 == m2)
    {
        if(d1 <= d2)
            fine1 = 0;
        else
            fine1 = 15*(d1-d2);
    }
    else if(y1 == y2 && (m1-m2) > 0)
    {
        fine1 = 500*(m1 - m2);
    }
    else{
        if( y1 < y2)
            fine1 = 0;
        else if(y1 == y2 && (m2-m1) > 0)
            fine1 = 0;
        else
            fine1 = 10000;
    }
    return fine1;
}
int main() {
    int d1; 
    int m1; 
    int y1; 
    scanf("%i %i %i", &d1, &m1, &y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%i %i %i", &d2, &m2, &y2);
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    printf("%d\n", result);
    return 0;
}
