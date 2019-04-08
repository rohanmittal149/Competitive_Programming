#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int equalizeArray(int n, int* arr) {
   int c[n],i,j,m = 0,max = 0;
    for(i = 0; i<n; i++){
        m =0;
        for(j = 0; j<n; j++)
        {
            if(arr[i]==arr[j])
               m++;
            if(max <= m)
                max = m;
           }
    }
    
    return n-max;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = equalizeArray(n, arr);
    printf("%d\n", result);
    return 0;
}
