#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b = 0;
    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
        {
            b += i;
        }
    }
    printf("%d", b);
}