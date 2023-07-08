#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++)
    {
        for(int c = 1; c <= b; c++)
        {
            printf("%d %d\n", i , c);
        }
    }
}