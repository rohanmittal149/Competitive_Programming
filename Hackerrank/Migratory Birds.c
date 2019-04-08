#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(long int n,int* ar) {
    int k=0,ans = 0;
    int c[5] = {0,0,0,0,0};
    for(int i = 0;i<n;i++){
    switch(ar[i]) {
        case 1: c[0]++;
                break;
        case 2: c[1]++;
                break;
        case 3: c[2]++;
                break;
        case 4: c[3]++;
                break;
        case 5: c[4]++;
                break;
    }
    } 
        for(int i = 0; i<5; i++) {
        if(c[i]>ans)
        {   
            ans = c[i];
            k  = i;
            }
        }
        
    return k;
}
int main() {
    long int n; 
    scanf("%ld", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result+1);
    return 0;
}
