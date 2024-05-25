#include <stdio.h>

int main()
{
    int first, second, three;
    int count = 0;
    scanf("%d\n", &first);
    int secondArray[first];
    size_t secondArr_length = sizeof(secondArray);     // 길이
    size_t secondArr_element = sizeof(secondArray[0]); // 요소
    int length = (int)(secondArr_length / secondArr_element);
    for (int j = 0; j < length; j++)
    {
        scanf("%d", &second);
        secondArray[j] = second;
    }
    scanf("%d", &three);
    for (int k = 0; k < length; k++)
    {
        if (secondArray[k] == three)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
