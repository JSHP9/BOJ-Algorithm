#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "";
    int m, len, last;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s", str);
        len = strlen(str);
        last = str[len - 1];
        printf("%c%c\n", str[0], last);
    }
    
    return 0;
}