#include <stdio.h>

int main()
{
    long long int h, b, c, s;
    double o;
    scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
    o = h * b * s * c;
    printf("%.1lf MB", o / (8 * 1024 * 1024));

}