#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n,int* ar) {
    int k=0,m=0;
    for(int i = 0; i<n; i++)
    {
        if(ar[i]>=k) {
            k = ar[i];
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(ar[i]==k)
            m++;
    }
   
    return m;
}
int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n,ar);
    printf("%d\n", result);
    return 0;
}

