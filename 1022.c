#include <stdio.h>

int main()
{
    char a[2001];
    fgets(a, 2000, stdin); //fgets( ) 를 사용하면 공백문자가 포함되어있ㄴ는 문장을 입력받아 저장할 수 있다.
    printf("%s", a);
}