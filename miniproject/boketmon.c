#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STATUS_SIZE 4

int * choose_my_monster();
void show_my_monster();
void show_current_tier();
int check_boss_battle();
int monster_appear(int *,int ,int);
void introduce_apear_monster(int*);
int * battle_boss_monster(int * ,int );
int * battle_nomal_monster(int *);
int main()
{
    int is_boss=0;
    int cnt_battle=0;
    int c_tier=0;
    int *current_tier;
    int *my_status;                          //mon_name,hp,ad,lv,exp      
    int *nomal_status;   //mon_name,hp,ad,lv,exp
    
    

    // 몬스터 선택 / 내 포켓몬 상태를 초기화 | 사용자 입력
    my_status = choose_my_monster();    

    // 내 포켓몬 상태 hp 공격력 현재 층수 정보 표출  |bm_hp,bm_ad,bm_exp,tier_lv 
    show_my_monster(my_status);


    //1층 진입 안내  |current_tier 
    c_tier +=1;
    show_current_tier(c_tier);

    //이번 전투 횟수 가져와서 보스판인지 확인  bs_mon_name, bs_mon_hp,bs_mon_ad, bs_mon_lv
    cnt_battle+=1;
    is_boss =  monster_appear(my_status,cnt_battle, c_tier);
    
    printf("보스인지 일반인지 보스면 2/일반1/아무것도안나옴0 )%d", is_boss);

    
    if(is_boss==2)
    {
        //int *boss_status;    //mon_name,hp,ad,lv,exp
        my_status =battle_boss_monster(my_status,c_tier);
        // 보스몬스터 상태계산 메서드, 출현 알림 
    }else if(is_boss==1)

    {
        my_status = battle_nomal_monster(my_status);
        int randint;
        //일반몬스터 상태 계산 
        randint = (-1 +rand() %5);
        //일반몬스터이다. 내 레벨을 가져와야한다. 
        int mon_lv = mystatus[1]+randint;
        int ad = mon_lv *0.6;
        printf("일반 몬스터가 나타났습니다.");
        // printf("레벨은 %d이며 현재 hp는 %d입니다.\n ", mystatus[1] + randint, (mystatus[1] + randint) *5);
        // printf("공격력은은 %d입니다. \n ", ad);      
    }
    

    //전투 진행 선공은 1.레벨이 높음 2. 동렙일경우 몬스터부터 공격 
    //전투시 1턴에 각 1번씩 공격이 이루어짐
    // 각 1번씩 공격이 끝나면 포션 드링킹 마시겠냐 질문 - 포션은 1층에 한번씩만 제공 |사용자입력


    // 전투 결과를 발표 turn_cnt, gain_exp, 기존lv,hp,ad 변화를 보여준다.

    // 다음층 올라갈지? | 사용자입력

        // n이면 전투 1번더한다.

        //전투결과를 발표
    
        //다음층 올라갈지? | 사용자입력

    //y 2층으로간다.
  

}
int* battle_nomal_monster(int *my_status)
{

    return my_status;
}

int* battle_boss_monster(int *my_status,int c_tier)
{
    return my_status;
}
 
//보스 배틀인치 체크해서 보스면 2 일반이면 1 아무것도 없으면 0
int monster_appear(int *mystatus,int cnt_battle,int c_tier)
{    
    
    //check is boss? 
    int cnt;
    int randint;
    cnt = cnt_battle;
    srand((unsigned int)time(NULL));
    randint = rand() %10;
    if(cnt%5 ==0)
    {
        int *boss_status;
        // 보스몬스터이다
        boss_status[0]= 1;
        boss_status[1]=c_tier*2;
        boss_status[2]=boss_status[1]*5;
        boss_status[3]=boss_status[1]*0.8;

        printf("보스 몬스터가 나타났습니다.");
        // printf("레벨은 %d이며 현재 hp는 %d입니다.\n ",boss_status[1],boss_status[2]);
        // printf("공격력은은 %d입니다. \n ", boss_status[3]);

        return 2;
        
    }else{
        //일반몬스터는 50%확율로 등장한다.
        if(randint <5){
            printf("일반 몬스터가 나타났습니다.");
            return 1;
        }else{
            printf("아무것도 나타나지 않았습니다.. 서운한 정적만 감돕니다.");
            return 0;

        }
        
    }
}


void show_current_tier(c_tier)
{
    int tier = c_tier;
    printf("현재 %d층 진입했습니다.\n",tier);
    

}


void show_my_monster(int* status)
{
    char mon_name[20];
    if (status[0]==1){
        mon_name[20] = "Bulbasaur";
    }else if (status[0]==2){
        mon_name[20] = "Charmander";
    }else if (status[0]==3){
        mon_name[20] = "Squirtle";
    }else if (status[0]==4){
        mon_name[20] = "pikachu";
    }
    
    int lv,hp,ad,exp;
    lv=status[1];
    hp=status[2];
    ad=status[3];
    exp=status[4];

    //내 몬스터의 상태를 보여준다.mon_name,lv,hp,ad,exp 
    printf("현재 육성중인 몬스터는 %s 입니다.\n ",mon_name);
    printf("레벨은 %d이며 현재 hp는 %d입니다.\n ", lv, hp);
    printf("공격력은은 %d이며 경험치는는 %d입니다.\n ", ad,exp);
}

int * choose_my_monster()
{
    int static my_status[5];
    int num;

    //사용자입력을 받는다
    printf("몬스터를 선택해주세요 번호입력)\n");
    printf("1.이상해씨\n");
    printf("2.파이리\n");
    printf("3.꼬부기\n");
    printf("4.피카츄\n");
    printf("===========================\n");
    printf("   :) ");

    scanf("%d", &num);
    getchar();
    //mon_name,lv,hp,ad,exp    첫 값 ? lv5 hp50 ad10 

    my_status[0]= num;
    my_status[1] = 5;
    my_status[2] = my_status[1] * 10;
    my_status[3] = my_status[1] * 2;
    my_status[4] = 0;

    
    return my_status;

}