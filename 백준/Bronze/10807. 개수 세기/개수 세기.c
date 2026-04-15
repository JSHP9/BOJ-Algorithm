#include <stdio.h>

int main() {
    int n[100] = { 0 }; // 1 <= n && n <= 100
    int x; // 11
    int count = 0;
    
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
        scanf("%d", &n[i]);
    
    int z; // 찾으려고 하는 정수 v
    scanf("%d", &z);
    
    for (int i = 0; i < x; i++)
    {
        if (n[i] == z)
        count++;
    }
    
    printf("%d", count);

    return 0;
}
