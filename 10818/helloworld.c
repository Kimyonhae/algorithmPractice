#include <stdio.h>

int main(void)
{
    int firstIn,secondIn;
    scanf("%d", &firstIn);
    int newArray[firstIn];
    for (int i = 0; i < firstIn; i++)
    {   
        scanf("%d", &secondIn);
        newArray[i] = secondIn;
    }

    int minValue = newArray[0];
    int maxValue = newArray[0];
    
    for (int j = 0; j < firstIn; j++)
    {
        if(maxValue < newArray[j]){
            maxValue = newArray[j];
        }
        else if(minValue > newArray[j]){
            minValue = newArray[j];
        }
    }
    printf("%d %d", minValue , maxValue);
    

    return 0;
}
