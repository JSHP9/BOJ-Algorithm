#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j, k;
    int b[n];
    
    for (int a = 0; a < n; a++)
        b[a] = a + 1;
    
    for (int k = 0; k < m; k++)
    {
        scanf("%d %d", &i, &j);
        int z = b[i-1];
        b[i-1] = b[j-1];
        b[j-1] = z;
    }
    
    for (int a = 0; a < n; a++)
        printf("%d ", b[a]);
    
    return 0;
}
