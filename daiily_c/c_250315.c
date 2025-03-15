#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7


int * make_r_number();
int main()
{

   //로또 번호를 생성한다.
    int *lotto_n = make_r_number();
    
    // 사용자 입력을 받는다.
    
     for (int i =0; i<7; i++)
     {
        printf("%d\n", lotto_n[i]);
     }



    return 0;
}



// 로또 번호를 생성 해서 리턴한다.
int * make_r_number()
{
    
    int rotto[SIZE];
    srand((unsigned)time(NULL));

    for (int i=0; i<SIZE; i++)
    {
        rotto[i] = (rand()%45) +1;
        for (int j=0; j<i; j++)
        {
            // 중복된 번호가 있으면 반복을 한번더돈다.
            if (rotto[i]== rotto[j]) i-- ;
        }
        
    }
    return rotto;
}