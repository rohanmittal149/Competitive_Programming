#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int s; 
    int n; 
    int m,z=-1; 
    scanf("%d %d %d", &s, &n, &m);
    int *k = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&k[keyboards_i]);
    }
    int *u = malloc(sizeof(int) * m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       scanf("%d",&u[drives_i]);
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        if(k[i]+u[j]<=s && k[i]+u[j]>z)
            z=k[i]+u[j];
    }
}
    printf("%d\n",z);
    return 0;
}
