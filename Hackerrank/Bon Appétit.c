#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bonAppetit(int n, int k, int b, int ar_size, int* ar) {
    int cost = 0;
    for(int i = 0; i<n; i++){
        
           
    cost = (cost + ar[i]);
    }
    cost = cost - ar[k];
    
    return cost/2;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    int result = bonAppetit(n, k, b, n, ar);
    if(result == b)
        printf("Bon Appetit");
    else{
        int r = b-result;
        printf("%d",r);
    }
    return 0;
}
