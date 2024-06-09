#include <stdio.h>

// 5 5
// 5 7
// 7 5

// 7 7
void loopForFunction(int arr[]){
    
    if(arr[0] == arr[1]) arr[3] = arr[2];
    else if(arr[0] == arr[2]) arr[3] = arr[1];
    else arr[3] = arr[0];
}

int main(void)
{
    int firstIn , secondIn , arr1[4] , arr2[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &firstIn , &secondIn);
        arr1[i] = firstIn;
        arr2[i] = secondIn;
    }
    
    loopForFunction(arr1);
    loopForFunction(arr2);

    printf("%d %d\n", arr1[3] , arr2[3]);
    return 0;
}


