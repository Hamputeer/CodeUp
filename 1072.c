#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    r:
    scanf("%d", &b);
    if(a -- != 0)
    {
        printf("%d\n", b);
        goto r;
    }
}