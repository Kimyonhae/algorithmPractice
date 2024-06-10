#include <stdio.h>

int main(void)
{
    int a , b ,c, maxValue, arr[3] , first , second;
    scanf("%d %d %d", &a , &b, &c);

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    maxValue = arr[0];
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if(maxValue < arr[i]){
            maxValue = arr[i];
        }
    }
    
    if(arr[0] == maxValue){
        first = arr[1];
        second = arr[2];
    }else if (arr[1] == maxValue){
        first = arr[0];
        second = arr[2];
    }else if(arr[2] == maxValue){
        first = arr[0];
        second = arr[1];
    }

    if(maxValue < first + second){
        printf("%d\n", first + second + maxValue);
    }else {
        printf("%d\n", (first + second) * 2 - 1);
    }


    return 0;
}
