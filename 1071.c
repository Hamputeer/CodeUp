#include <stdio.h>

int main()
{
    int a;
    r:
    scanf("%d", &a);
    
    if(a != 0)
    {
        printf("%d\n", a);
        goto r;
    }
    
}