#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n; 
    scanf("%d", &n);
    printf("%c", s[n-1]);
    
    return 0;
}
