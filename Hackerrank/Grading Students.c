#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>


int main() {
    int n,r; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    int *result = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&grades[i]);
    }
     for(int i = 0; i < n; i++){
         if(grades[i]>=38)
         { r = grades[i]%5;
          if(r>=3)
              result[i]= grades[i]-r+5;
          else 
             result[i]=grades[i];  
         
             
         }
         else 
             result[i]=grades[i];
         
     }
    
    for(int i = 0; i < n; i++) {
         printf("%d\n", result[i]);
    }
    
    

    return 0;
}
