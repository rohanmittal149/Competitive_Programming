#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int x,y,z,d1 = 0,d2 = 0; 
         scanf("%d %d %d",&x,&y,&z);
        d1 = abs(z-x);
        d2 = abs(z-y);
        if(d1>d2)
            printf("Cat B\n");
       else if(d2>d1)
             printf("Cat A\n");
        else
            printf("Mouse C\n");
        
    }
    return 0;
}
