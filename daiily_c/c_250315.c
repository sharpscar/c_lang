#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int * make_r_number_list();
int make_r_number();
int is_in(int number, int list[], int index);
int main()
{   
    int user_in_list[SIZE];
    //사용자 입력을 받는 부분 우선더미데이터로 시작 - 사실 어제 추첨된번호!
    user_in_list[0]= 2;
    user_in_list[1]= 13;
    user_in_list[2]= 15;
    user_in_list[3]= 16;
    user_in_list[4]= 33;
    user_in_list[5]= 43;


    // 컴퓨터가 랜덤한 7개의 번호를 생성
    int * r_list = make_r_number_list();

    //자동을 돌릴건지 물어보는 부분 [[사용자 입력]] 여기서 y가 입력되면 컴퓨터의 자동번호 생성으로 다시돌아간다.

    // 자동돌릴건지에서 사용자 입력이 False일땐 당첨조회
    // 당첨조회 user_in_list와 r_list를 비교! 


    //게임 계속할건지 물어보는 부분 [[사용자 입력]] 여기서 y가 입력되면 사용자입력 부분으로 다시 돌아간다.
    return 0;
}

int * make_r_number_list()
{

   //로또 번호를 생성한다.
   int lotto_n[SIZE] ;
   int index =0;
   //중복 검사를 한다. 

    for (int i =0; i<SIZE; i++)
    {
       srand((unsigned)time(NULL));
       int r_number = make_r_number();

       //리스트에 해당 하는 숫자가 없으면 넣어라
       if (is_in(r_number,lotto_n,index)==1)
       {
           lotto_n[i] = r_number;
           index++;
       }
       
       printf("%d\n", lotto_n[i]);
    }
    return lotto_n;
}

int is_in(int number, int list[], int index)
{
    int i;
    for (i=0; i<=index;i++)
    {
        if (number== list[i])
            return 0;
    }
    return 1;
}

// 로또 번호를 생성 해서 리턴한다.
int make_r_number()
{
    
    // int rotto[SIZE];
    int r_number;
    int flag;

    r_number = (rand()%45) +1;
   
    printf("%d\n", r_number);
    
    return r_number;
}