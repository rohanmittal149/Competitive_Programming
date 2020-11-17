#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s1; 
    int t1; 
    scanf("%d %d",&s1,&t1);
    int a1; 
    int b1; 
    scanf("%d %d",&a1,&b1);
    int m1,p1,q1,c1=0,d1=0; 
    int n1; 
    scanf("%d %d",&m1,&n1);
    int *apple = malloc(sizeof(int) * m1);
    for(int apple_i = 0; apple_i < m1; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n1);
    for(int orange_i = 0; orange_i < n1; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
     for(int i = 0; i < m1; i++){
        p1 = 0; 
         
      p1 = p1 + a1 + apple[i];
         
           if((p1>s1||p1==s1)&&(p1<t1 || p1==t1))
             c1++;
    }
    for(int a = 0; a < n1; a++){
        q1 = 0; 
      q1 = q1 + b1 + orange[a];
          
          if((q1>s1||q==s)&&(q1<t1 || q1==t1))
             d1++;
    }
    printf("%d\n%d",c1,d1);
    
    return 0;
}
