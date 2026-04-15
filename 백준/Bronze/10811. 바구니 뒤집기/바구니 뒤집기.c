#include <stdio.h>

int main() {
    
    int m, n;
    scanf("%d %d", &m, &n);
    
    int b[m];
    int i, j;
    
    for (int k = 0; k < m; k++)
        b[k] = k+1;
    
    for (int k = 0; k < n; k++)
    {

        scanf("%d %d", &i, &j);
        for (int a = i; a <= j; a++)
        {
            int z = b[a - 1];
            b[a - 1] = b[j - 1];
            b[j - 1] = z;
            j--;

        }
    
    }
    
    for (int k = 0; k < m; k++)
        printf("%d ", b[k]);
    
    return 0;
}
