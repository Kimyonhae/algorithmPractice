#include <stdio.h>

void calcurator(int firstIn,int secondIn , int arr[100][100]){
    for (int i = 0; i < firstIn; i++)
    {
        for (int j = 0; j < secondIn; j++)
        {
            int value;
            scanf("%d" , &value);
            arr[i][j] = value;
        }
    }
}

int main(void)
{
    int arr1[100][100],arr2[100][100], firstIn , secondIn;

    scanf("%d %d", &firstIn , &secondIn);    
    

    calcurator(firstIn, secondIn ,arr1);

    calcurator(firstIn, secondIn ,arr2);


    for (int i = 0; i < firstIn; i++)
    {
        for (int j = 0; j < secondIn; j++)
        {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


