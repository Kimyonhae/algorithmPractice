#include <stdio.h>

int main(void)
{
    int cardCount;
    unsigned int limit , sum;


    scanf("%d %u\n", &cardCount , &limit);
    int arr[cardCount];
    for (int i = 0; i < cardCount; i++)
    {
        unsigned int card;
        scanf("%u", &card);

        arr[i] = card;
    }

    sum = 0;
    int globalValue = 0;
    for (int j = 0; j < cardCount; j++)
    {
        for (int k = j + 1; k < cardCount; k++)
        {
            for (int m = k + 1; m < cardCount; m++)
            {
                int localValue = arr[j] + arr[k] + arr[m];

                if(localValue <= limit){
                    if(globalValue < localValue){
                        globalValue = localValue;
                    }
                }
            }
            
        }
    }
    printf("%d ", globalValue);
    return 0;
}
