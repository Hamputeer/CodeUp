#include <stdio.h>

int main()
{
    int a, b = 0, i = 0;
    scanf("%d", &a);
    while(1)
    {
        i++;
        b += i;
        if(b >= a)
        {
            break;
        }
    }
    printf("%d", i);
}