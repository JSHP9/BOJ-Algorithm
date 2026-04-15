#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (0 <= h && h <= 23) {
        if (45 <= m && m <= 59)
            printf("%d %d", h, m - 45);
        else if (0 <= m && m <= 44 && 1 <= h)
            printf("%d %d", h -1, m - 45 + 60);
        else if (0 <= m && m <= 44 && 0 == h)
            printf("%d %d", h -1 + 24, m - 45 + 60);
    }
    return 0;
}