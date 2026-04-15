#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x == y && x == z)
        printf("%d", 10000 + x * 1000);
    
    else if ( (x == y && x != z) || (x == z && x != y) || (z == y && x != z) ) 
    {
        int s = (x != z) ? x : z;
        int same = (s != y) ? z : s;
        printf("%d", 1000 + same * 100);
    }
    
    else if (x != y && x != z && z != y) 
    {
        int m = (x > y) ? x : y;
        int max = (m > z) ? m : z;
        printf("%d", max * 100);
    }
    return 0;
}