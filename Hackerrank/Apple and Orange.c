#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m,p,q,c=0,d=0; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
     for(int i = 0; i < m; i++){
        p = 0; 
         
      p = p + a + apple[i];
         
           if((p>s||p==s)&&(p<t || p==t))
             c++;
    }
    for(int a = 0; a < n; a++){
        q = 0; 
      q = q + b + orange[a];
          
          if((q>s||q==s)&&(q<t || q==t))
             d++;
    }
    printf("%d\n%d",c,d);
    
    return 0;
}
