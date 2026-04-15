#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d\n", &n);
    
    for (int i = 1; i <= n; i++) 
    {
        if (i % 4 == 0)
        printf("long ");
    }
    printf("int");
    return 0;
}