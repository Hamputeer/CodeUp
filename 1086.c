#include <stdio.h>

int main()
{
    long long int w, h, b;
    double MB;
    scanf("%lld %lld %lld", &w, &h, &b);
    MB = (w * h * b);

    printf("%.02lf MB", MB / (8 * 1024 * 1024));
}