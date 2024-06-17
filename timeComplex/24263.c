#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count); // 반복 횟수 
    printf("%d\n", count); // Big-o 점근적 표기로 인해 오메가(n) -> 그러므로 횟수 : count / 최고차항 : 1
    printf("%d",1);
    return 0;
}
