#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < x)
            printf("%d ", a[i]);
        
    }
    free(a);
    return 0;
}
