#include <stdio.h>

int main(void)
{
    unsigned long input, answer; // 원하는 값
    int minValue = 0;
    scanf("%lu", &input);
    unsigned long searchValue = input;
    while (searchValue > 0)
    {
        
        unsigned long circleInput = searchValue;
        int sum = 0;
        while (circleInput > 0)
        {
            sum += circleInput % 10;
            circleInput = circleInput / 10;
        }

        if(input == sum + searchValue){
            minValue = searchValue;
        }

        searchValue--;
    }
    if (minValue == 0)
    {
        printf("%d\n", minValue);
    }else {
        printf("%lu\n", minValue);
    }

    return 0;
}
