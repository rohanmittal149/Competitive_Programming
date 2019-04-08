#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *a = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&a[arr_i]);
    }
   long int s[5],temp,c;
    s[0] = a[1]+a[2]+a[3]+a[4];
    s[1] = a[0]+a[2]+a[3]+a[4];
    s[2] = a[1]+a[0]+a[3]+a[4];
    s[3] = a[1]+a[2]+a[0]+a[4];
    s[4] = a[1]+a[2]+a[3]+a[0];
     for(int i = 1; i < 5; i++) {
         
    if(s[0]<=s[i]){
    temp = s[i];
    s[i]=s[0];
    s[0]=temp;
     }
     }
    for(int i = 3; i >=0; i--) {
         
    if(s[4]>=s[i]){
    temp = s[i];
    s[i]=s[4];
    s[4]=temp;
     }
     }
    printf("%ld %ld",s[4],s[0]);
    
    return 0;
}
