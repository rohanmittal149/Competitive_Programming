/* Watson likes to challenge Sherlock's math ability. He will provide a starting and ending value describing a range of integers. Sherlock must determine the number of square integers within that range, inclusive of the endpoints.

Note: A square integer is an integer which is the square of an integer, e.g. 1, 4, 9, 16, 25.

For example, the range is a = 24 and b = 49, inclusive. There are three square integers in the range:  25, 36 and 49. */


#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int a,c=0; 
        int b; 
        scanf("%i %i", &a, &b);
        int d,e;
        d = sqrt(a-1);
        e = sqrt(b);
        c = (e - d);
        printf("%d\n",c);
        
    }
    return 0;
}