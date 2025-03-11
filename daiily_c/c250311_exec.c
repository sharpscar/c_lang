#include <stdio.h>
#include <float.h>
/*
c언어의 문법은 무조건 위에서 아래로 해석되기 때문에 변수를 사용하려면
사용하는 부분보다 위에 변수를 선언해줘야 합니다. 즉, 변수 선언이라는
말은 변수가 있다는 것을 알려 준다는 뜻입니다.

*/

void show_your_seconde();
void show_float();
void show_your_height();
void show_cup_chage_to();
void get_atom();


int main()
{

    // 문제 4번
    // show_float();
    // 문제 5번
    // show_your_seconde();
    // 문제 6번 
    get_atom();
    // 문제 7번 
    // show_cup_chage_to();
    // 문제 8번 
    // show_your_height();
    
    return 0;
}

void show_your_seconde()
{
    int year;    
    float year2;
    // 현재년도 - 출생년도 = 햇수 
    // float year2 = FLT_MAX;
    printf("출생연도를 입력하세요: ");    
    scanf("%d",&year);
    year2 = 2025-year;

    // 1년은 365, 하루는 24 시간 1시간은 60분 1분은 60초
    // printf("당신은 %d초를 살고있습니다.",year2*365*24*60*60);
    printf("당신은 %f 초를 살고있습니다.", year2*3.156*100000000);
}

void show_float()
{
    float fn;
    // printf("부동소수점 수를 입력하시오 :\n");
    scanf("%f" , &fn);
    printf("고정소수점 표기:%.6f\n", fn);
    printf("지수 표기:%.6fe+01\n", fn*0.1);
    // printf("p 표기:%f\n", fn*0.1 );// 모르겠다. << 이해가 어렵..
}


void show_your_height()
{   
    float height;
    printf("키를 입력하세요 cm단위입니다. : ");
    scanf("%f", &height);
    printf("당신의 키는 %.2f입니다.", height/2.54);
    printf("키를 입력하세요 inch단위입니다. : ");
    scanf("%f", &height);
    printf("당신의 키는 %.2f입니다.", height*2.54);
}

void show_cup_chage_to()
{
    // 부피단위 연산
    // 1파인트 = 2컵
    // 1컵 = 8 온스
    // 1온스 = 2테이블스푼
    // 1테이블스푼 = 2 티스푼
    // 1컵단위가 기준이다. 그럼 다른 단위는 어떻게 계산될까?
    // 8번 부동소수점이 왜 적합하냐면 아무래도 나누기, 곱 연산에 정수보다는
    // 실수가 좀더 정확성을 높일수 있기 때문아닐까요?
    

    float cup = 1.0;
    printf("1컵은 1/2 파인트 입니다. 파인트는 %.2f입니다.\n",  cup /2);
    printf("1컵은 8 온스 입니다. %.2f\n",  cup *8);
    printf("1컵은 16 테이블 스푼 입니다. %.2f\n",  cup *16);
    printf("1컵은 32 티스푼 입니다. %.2f\n",  cup *32);
}
void get_atom()
{
    double water,quart, atom;

    printf("물을 입력하세요");
    scanf("%lf", &water);
    quart = water*950;
    atom = quart / 3.0 *-10e23;
    printf("물에는 %lf개의 분자가 있다냥", atom);    
    
}