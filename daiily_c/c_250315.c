#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int compare_two_list(int list[], int user_in_list[]);

int * make_r_number_list();
int make_r_number();
int is_in(int number, int list[], int index);
int main()
{   
    char do_you_want_generate_com_number ;
    char *eval_lotto;
    int win_cnt;
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

    //
    do_you_want_generate_com_number = 'n'; // 사용자가 자동 돌리기 싫대 

    if(do_you_want_generate_com_number=='n')
    {
        //당첨조회를 합시다. 당첨번호의 갯수에 따라 등수를 평가하는 함수 
        win_cnt = compare_two_list(r_list, user_in_list);

         
        

      //다시 24라인으로 돌아가서 랜덤한 번호를 생성하고 - 약 1초 휴식 재생성 프린트 반복
    }else if(do_you_want_generate_com_number='y')
    {
        // 약 1초 휴식 재생성 프린트 반복하는 기능 추가 예정
        r_list = make_r_number_list();
    }
        

    // 자동돌릴건지에서 사용자 입력이 False일땐 당첨조회
    // 당첨조회 user_in_list와 r_list를 비교! 


    //게임 계속할건지 물어보는 부분 [[사용자 입력]] 여기서 y가 입력되면 사용자입력 부분으로 다시 돌아간다.
    return 0;
}



int compare_two_list(int com_list[], int user_in_list[])
{
    int wincnt=0;
    //여기서 주의해야 할건 컴퓨터의 배열은 7개 유저의 배열은 6개의 요소가 있다.
    //2등의 경우 컴배열의 마지막 요소가 유저 리스트에 있는경우 이다.
    // 파이썬에선 intersection? 교집합 기능을 이용해서 몇갠지 확인했다. 

    for(int i=0; i<SIZE-1;i++)
    {
        for (int j=0; j<SIZE-1;j++)
        {
            if (com_list[i]==user_in_list[j])
            {
                wincnt++;
            }
        }
    }
    // wincnt 의 갯수에 따라 등수를 리턴하자
    if (wincnt==6)
    {
        return 1;
    }else if(wincnt==5)
    {
        //2등인경우
        for(int k=0; k<SIZE-1;k++)
        {
            if(user_in_list[k]==com_list[6])
            {
                return 2;
            }
        }
        //3등인 경우 
        return 3;
    }else if(wincnt==4)
    {
        return 4;
    }else if(wincnt==3)
    {
        return 5;
    }else{
        return 0; //꽝 ㅋ
    }
    
    // return wincnt;
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