#include <stdio.h>

int main(void)
{
    int loop;
    int maxValue = 0;
    int maxIndex = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &loop);
        if(loop > maxValue){
            maxValue = loop;
            maxIndex = i;
        }
    }
    printf("%d\n", maxValue);
    printf("%d\n", maxIndex + 1);
    
    return 0;
}


