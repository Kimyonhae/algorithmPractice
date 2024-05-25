#include <stdio.h>

// input
// 10 5
// 1 10 4 9 2 3 8 5 7 6

//output
// 1 4 2 3

int main(void)
{
    int firstIn , secondIn, secondLine;
    int count = 0;
    scanf("%d %d\n" , &firstIn , &secondIn);
    int newArray[firstIn];
    for (int i = 0; i < firstIn; i++)
    {
        scanf("%d", &secondLine);
        if (secondIn > secondLine){
            newArray[count] = secondLine;
            count++;
        }
    }

    for (int j = 0; j < count; j++)
    {
        printf("%d ", newArray[j]);
    }
    
}
