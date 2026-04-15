#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j, k;
    int b[n];
    
    for (int a = 0; a < n; a++)
        b[a] = 0;
    
    for (int p = 0; p < m; p++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int a = i; a <= j; a++)
            b[a-1] = k;
    }
    
    for (int a = 0; a < n; a++)
        printf("%d ", b[a]);
    
    return 0;
}
