#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int score[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &score[i]);
    
    int m = score[0];
    for (int i = 1; i < n; i++)
    {
        if (m < score[i])
            m = score[i];
    }
    
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (float)score[i] / m * 100;
    }
    
    float average = sum / n;
    
    printf("%f", average);
    
    return 0;
}
