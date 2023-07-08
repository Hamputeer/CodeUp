
#include <stdio.h>
 
 
int main (void)
{
    
    char c;
    char a = 'a';
    scanf("%c", &c);
 
    do{
 
        printf("%c ",a);
        a++;
        c--;
    }
    while(c >= 'a');
    //printf("%c ",c);
    //이건 진짜 못해먹겠어요 죄송합니다..
    return 0;
}