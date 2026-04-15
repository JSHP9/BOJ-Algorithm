#include <stdio.h>
#include <string.h>

int main(void) {
    char n[1000];
    int m, len;
    
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%s", n);
        len = strlen(n);
        char last = n[len - 1];
        
        printf("%c%c\n", n[0], last);
    }

    return 0;
}
