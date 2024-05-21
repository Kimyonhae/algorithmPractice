#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int result = scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}
