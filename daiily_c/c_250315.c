#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


#define SIZE 7

int compare_two_list(int list[], int user_in_list[]);

int * make_r_number_list();
int make_r_number();
int * user_input();
int is_in(int number, int list[], int index);
int get_input_more_game();

int main()
{   
    char do_you_want_generate_com_number ;
    char *eval_lotto;
    int win_cnt;
    // int r_list[SIZE];
    int* r_list;
    int * user_in_list;
    int static cnt;
    char answer;

    //사용자 입력을 받는 부분 우선더미데이터로 시작 - 사실 어제 추첨된번호!
    // user_in_list[0]= 2;
    // user_in_list[1]= 13;
    // user_in_list[2]= 15;
    // user_in_list[3]= 16;
    // user_in_list[4]= 33;
    // user_in_list[5]= 43;

    user_in_list = user_input();

    int com_list[SIZE];
    // 컴퓨터가 랜덤한 7개의 번호를 생성하여 포인터로 해당 배열위치를 가져옴
    r_list = make_r_number_list();

    for(int i=0 ; i<SIZE; i++)
    {
        com_list[i] = (int)r_list[i]; //그걸 다시 com_list 배열에 저장
        
    }
    // for (int i=0; i<SIZE-1; i++)
    // {
    //     printf("user_input검증 %d\n", user_in_list[i]);
    // }
  
    //되는거였다.. 

    //자동을 돌릴건지 물어보는 부분 [[사용자 입력]] 여기서 y가 입력되면 컴퓨터의 자동번호 생성으로 다시돌아간다.
    // int로 바꿈 .. y n 인식불가 -추후 확인
    answer = get_input_more_game();
    printf("%d", answer);

    do
    {
            /* code */
            printf("게임을 한번 더하시겠습니까?");
            scanf("%d",&answer);
            win_cnt = compare_two_list(com_list, user_in_list);
            cnt++;
            printf("%d회차 , %d등입니다. - 6이면 꽝\n",cnt,win_cnt);        

    } while (answer==0);    

    
    while(1)
    {

        //나중에.. 추가할 기능 자동을 돌린다는걸 5게임 만들어 진행해보자 r_list를 5개 생성해서 
        // 5게임 세트로 구매하여 컴퓨터 번호와 비교하는 기능
          
        // r_list = make_r_number_list();
        r_list = make_r_number_list();
    
        user_in_list = user_input();
    
        win_cnt = compare_two_list(com_list, user_in_list);
    
        //cnt 변수 추가해서 출력해줘야함 
        cnt++;
        printf("%d회차 당첨번호 입니다. %d,%d,%d,%d,%d,%d 그리고 보너스번호 %d",cnt, r_list[0],r_list[1],r_list[2],r_list[3],r_list[4],r_list[5],r_list[7]);
        sleep(60);
        
        //getch 함수나 kbhit() 함수가 conio.h 헤더;; 리눅스계열에서는 쓸수없다. 어쨋든 키보드 입력을 받으면 break 하는 기능이 필요함

    }
                
    

    

            

    // 자동돌릴건지에서 사용자 입력이 False일땐 당첨조회
    // 당첨조회 user_in_list와 r_list를 비교! 


    //게임 계속할건지 물어보는 부분 [[사용자 입력]] 여기서 y가 입력되면 사용자입력 부분으로 다시 돌아간다.
    return 0;
}



int get_input_more_game()
{
    char answer;
    printf("자동 돌리시겠습니까? y(회차 자동진행)/n(번호입력)");
    scanf("%c",&answer);
    getchar();
    getchar();
    
    if(answer == 'y')
    {
        return 1;
    }else 
    {
        return 0;
    }
}
int * user_input()
{   
    int num1,num2,num3,num4,num5,num6;
    int static nums[6];
    int input_is_good;
    
    printf("정수를 한칸씩 띄어서 입력해주세요");
    scanf("%d %d %d %d %d %d", &num1,&num2,&num3,&num4,&num5,&num6);
    nums[0] = num1;
    nums[1] = num2;
    nums[2] = num3;
    nums[3] = num4;
    nums[4] = num5;
    nums[5] = num6;
    return nums;
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
        return 6; //꽝 ㅋ
    }
    
    // return wincnt;
}

int * make_r_number_list()
{

   //로또 번호를 생성한다.
    int static lotto_n[SIZE] ;
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
       
    //    printf("%d\n", lotto_n[i]);
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
    return r_number;
}