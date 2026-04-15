#include <stdio.h>

int main() {
    int n[10] = { 0 };
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        n[i] = n[i] % 42;
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != j && n[i] == n[j])
                n[j] = -1;
        }
        
        if (n[i] != -1)
            count++;
    }
    
    printf("%d", count);
    
    return 0;
}