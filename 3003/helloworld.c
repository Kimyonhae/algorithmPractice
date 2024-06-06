#include <stdio.h>

// 0 1 2 2 2 7 -> 1 1 2 2 2 8
int main(void)
{
    int arr1[6], number;
    int arr2[6] = {1 ,1 ,2 ,2, 2, 8};
    int length = (int) sizeof(arr1) / 4;
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &number);

        if(number > arr2[i]){
            number = arr2[i] - number;
        }else if (number < arr2[i]){
            number = arr2[i] - number;
        }else {
            number = 0; // 초기화
        }

        arr1[i] = number;
    }


    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    
    return 0;
}
