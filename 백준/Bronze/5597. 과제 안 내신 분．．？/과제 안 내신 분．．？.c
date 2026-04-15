#include <stdio.h>

int main() {
    int n[30] = { 0 };
    int x;
    
    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &x);
        n[x-1] = 1;
    }
    
    for (int i = 0; i < 30; i++)
    {
        if (n[i] != 1)
            printf("%d\n", i+1);
    }
    
    return 0;
}
