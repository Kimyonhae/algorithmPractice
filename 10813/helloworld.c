#include <stdio.h>

int main(void)
{
    int firstIn , secondIn;
    scanf("%d %d\n", &firstIn, &secondIn);
    int newArray[firstIn];
    for (int i = 0; i < firstIn; i++)
    {
        newArray[i] = i + 1;
    }
    
    for (int j = 0; j < secondIn; j++)
    {
        int first , second, savedfirst , savedsecond;
        scanf("%d %d",&first , &second);

        savedfirst = newArray[first - 1];
        savedsecond = newArray[second - 1];
        newArray[first - 1] = savedsecond;
        newArray[second - 1] = savedfirst;
    }

    for (int k = 0; k < firstIn; k++)
    {
        printf("%d " , newArray[k]);
    }
    
    

    return 0;
}
