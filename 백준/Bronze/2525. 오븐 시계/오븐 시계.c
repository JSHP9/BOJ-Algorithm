#include <stdio.h>

int main() {
    int h, m, c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    if ((0 <= h && h <= 23) && 0 <= m && m <= 59) 
    {
        if (m + c < 60) 
            printf("%d %d", h, m + c);
        else if (60 <= m + c && h + 1 * ( (m + c) / 60 ) <= 23) 
            printf("%d %d", h + 1 * ( (m + c) / 60 ), m + c - 60 * ( (m + c) / 60 ) );
        else if (60 <= m + c && h + 1 * ( (m + c) / 60 ) >= 24)
            printf("%d %d", h + 1 * ( (m + c) / 60 )- 24, m + c - 60 * ( (m + c) / 60 ) );
    }
    return 0;
}