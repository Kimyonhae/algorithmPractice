#include <stdio.h> 

// 정수 a,b,c,d,e,f 
// 1 3 -1 4 1 7


// output 2 -1
int main()
{
    int a,b,c,d,e,f , x , y;

    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d ",&c);
    scanf("%d ",&d);
    scanf("%d ",&e);
    scanf("%d",&f);
    
    for(int i = -999; i <= 999; i++) // i 가 x   j 가 y
    {
        for (int j = -999; j <= 999; j++)
        {
            if ((a * i + b * j == c) && (d * i + e * j == f)) {
                printf("%d %d\n", i, j);
                return 0; // 해를 찾으면 프로그램 종료
            }
        }
        
    }
    return 0;
}
