#include <stdio.h>

int main(void)
{
    int firstIn, secondIn;
    scanf("%d %d",&firstIn , &secondIn);
    int newArray[firstIn];
    for (int i = 0; i < firstIn; i++)
    {
        newArray[i] = 0;
    }
    for (int j = 0; j < secondIn; j++)
    {
        int first , second, three;
        scanf("%d %d %d", &first , &second , &three);

        for (int k = first; k <= second; k++)
        {
            newArray[k - 1] = three;
        }
        
    }
    
    // Output
    for (int q = 0; q < firstIn; q++)
    {
        printf("%d ",newArray[q]);
    }
    
    
    return 0;
}
