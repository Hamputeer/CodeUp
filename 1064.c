#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d ", &a, &b, &c);
    d = a < b ? a : b;
    d = d < c ? d : c;
    printf("%d", d);
}