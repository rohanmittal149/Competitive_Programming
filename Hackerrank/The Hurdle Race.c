#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp; 
    int k; 
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
    int max = height[0];
    for(int i = 1; i<n; i++)
    {
        if(max<height[i]) {
             temp = max;
        max = height[i];
        height[i] = temp;
    }
    }
    
    int c = max - k;
    if(c<0 || c==0)
        printf("0");
    else
        printf("%d",c);
   
    return 0;
}
