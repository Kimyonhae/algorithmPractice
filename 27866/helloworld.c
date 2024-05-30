#include <stdio.h>

int main() {
    char firstIn[100];
    int secondIn;

    fgets(firstIn, sizeof(firstIn), stdin); 
    scanf("%d", &secondIn);
    printf("%s %d\n", firstIn, secondIn);

    return 0;
}
