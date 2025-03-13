#include <stdio.h>

void show_pyramid();

int main()
{
    show_pyramid();
    return 0;
}

void show_pyramid()
{
    int num, half; //11로 고정해본다.
    // total_len =11;
    printf("정수를 입력해요.");
    scanf("%d",&num);
    
  

    for (int i=0; i<num;i++) //0 1 2 3 4 5 6 7 8 9     
    {
        /** i 0 1 2 3 4 5 
         *  j 5 4 3 2 1 0 
         */
        for(int j=0; j<num-i; j++) 
        {
            printf(" ");
        }
        /** i 0 1 2 3 4 5 
         *  j 5 4 3 2 1 0 
         *  k 1 3 5 7 9 11
         */
        for (int k=0; k< i*2+1; k++) // 
        {   
            printf("*");

        }
        printf("\n");
        /**
         * 숫자의 변화를 적는건 번거롭긴한데..
         * 그 변화를 보고 규칙성을 찾아 코드로 작성하는건
         * 쉽지않다. 난 피라미드 실패했고 할때마다 성공하기 어려울거같다.
         */
    }
    
    return 0;


}