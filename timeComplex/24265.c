#include <stdio.h>

int main(void)
{
    unsigned long count, sum;
    scanf("%lu", &count);
    sum = count * (count - 1) / 2;

    printf("%lu\n", sum);
    printf("%d", 2);
    return 0;
}

// 4 3 2 1