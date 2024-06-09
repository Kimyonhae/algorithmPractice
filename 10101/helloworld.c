#include <stdio.h>

// 세 각의 크기가 모두 60이면, Equilateral
// 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
// 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
// 세 각의 합이 180이 아닌 경우에는 Error

int main(void)
{
    int arr[3];

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        int angle;
        scanf("%d", &angle);
        arr[i] = angle;
    }

    int sumAngle = arr[0] + arr[1] + arr[2];
    printf("총합 : %d\n", sumAsngle);
    if(sumAngle == 180){
        if(arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2]){
            printf("Equilateral");
        }
        else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]){
            printf("Scalene");
        }else if(arr[0] == arr[1] && arr[1] != arr[2] && arr[0] != arr[2]){
            printf("Isosceles");
        }else if(arr[0] != arr[1] && arr[1] == arr[2] && arr[0] != arr[2]){
            printf("Isosceles");
        }else if(arr[0] != arr[1] && arr[1] != arr[2] && arr[0] == arr[2]){
            printf("Isosceles");
        }
    }else {
        printf("Error");
    }
    
    return 0;
}
