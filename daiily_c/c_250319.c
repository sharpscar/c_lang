#include <stdio.h>
/**
 * 2차원 배열을 이용해 로또 출력 포멧을 만들어볼수 있다.
 */

int main()
{
    int lotto[5][10] = {0,};
    
    int i,j;
    int sum=0;
    // 초기화


    for (i=0; i<5;i++)
    {
        for(j=0; j<10;j++)
        {
            if(sum < 45)
            {
                sum ++;
                lotto[i][j] = sum;
            }
            

            
        }
    }
    // 연산과 출력 을 분리 
    for (i=0; i<5;i++)
    {
        for(j=0; j<10;j++)
        {
            printf("%2d ",lotto[i][j]);
        }
        printf("\n");
    }

    return 0;
}