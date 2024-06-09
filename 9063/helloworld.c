#include <stdio.h>
// 3
// 20 24
// 40 21
// 10 12

// 360 넓이 구하기 
// (x의 최대값 - x의 최소값) * (y의 최대값 - y의 최소값) 

int loopCalc(int arr[],int count){
    int minValue = arr[0];
    int maxValue = arr[0];
    int length = count;
    for (int j = 0; j < length; j++)
    {
        
        if(minValue > arr[j]){
            minValue = arr[j];
        }
        if(maxValue < arr[j]){
            maxValue = arr[j];
        }        
    }
    return  maxValue - minValue;;
}

int main(void)
{
    int count, firstIn , secondIn , arr1[count] , arr2[count];

    scanf("%d\n", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &firstIn , &secondIn);
        arr1[i] = firstIn;
        arr2[i] = secondIn;
    }
    int width = loopCalc(arr1, count);
    int height = loopCalc(arr2, count);

    printf("%d\n" , width * height);
    
    return 0;
}
