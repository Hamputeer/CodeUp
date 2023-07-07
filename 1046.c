#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld", &a, &b, &c);
    d = a + b + c;
    printf("%d\n", d);
    printf("%.1f",d / 3.0);
}