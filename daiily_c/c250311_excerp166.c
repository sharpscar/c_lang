#include <stdio.h>
#include <float.h> 
#define GELON 3.785
#define MILE 1.609
void ex_1();
void ex_2();
void ex_3();
void ex_4();
void ex_5();
void ex_6();
void ex_7();
void ex_8();

int main(void)
{

// const float GELON = 3.785;
// const float MILE = 1.609;
    // ex_1();
    ex_2();
    // ex_3();
    // ex_4();
    // ex_5();
    // ex_6();
    // ex_7();
    // ex_8();
    return 0;
}
void ex_1()
{
    char name1[10];
    char name2[10];
    printf("이름을 입력하세요\n");
    scanf("%s",name1);
    printf("성을 입력하세요\n");
    scanf("%s",name2);
    printf("%s %s", name1, name2);
}
void ex_2()
{
    char name1[10];
    char name2[10];
    printf("이름을 입력하세요\n");
    // scanf("%s",name1);    
    // printf("\"%s\"", name1);    
    scanf("%s",name1); //\"%20s\"\n
    printf("\"%20s\"\n", name1);
    

}

void ex_3()
{
    float my_val = 21.3;
    // printf("%f", my_val);
    printf("%.3e1", my_val*0.1);
}
void ex_4()
{
    float my_height = 6.208;
    printf("키를 입력하세요 cm단위입니다. : ");
    scanf("input %f", &my_height);
    printf("Dabney씨, 당신의 키는 %.3f 피트 입니다.",my_height/2.54);
}
void ex_5()
{
    /**
     * 파일 크기를 입력받고  a속도에 b크기의 파일을 몇초만에 받을수
     * 있는지 계산하는 프로그램이다. file_size / speed = time
     */
    // 18.12 Mega (1000000) bit 19000197.12
    float speed = 18.12; //*1024*1024;
    //2.20 메가바이트를 비트로 환산 18454937.6
    float file_size = 2.20; // *1024*1024 *8; 

    printf("초당 %.2f 메가비트 속도로  %.2f 메가 바이트크기의 파일을 %.2f초만에 받을수 있습니다.", 
        speed,file_size, (file_size*1024*1024 *8)/(speed*1024*1024));

}
void ex_6()
{
    /**
     * 먼저 이름을 요청하고 이어서 다시 성을 요청한다
     * 입력된 성과 이름을 한라인에 출력한다
     * 성과 이름을 구성하는 글자수를 이름의 끝 글자에 맞추어 출력하라.  
     */
    char s1[] = "Melissa";
    char s2[] = "Honeybee";
    printf("%s %s\n", s1, s2);
    printf("%d", sizeof(s2)/sizeof(char));
    int p = sizeof(s1)/sizeof(char);
    // printf("%7d %8d",sizeof(s1),sizeof(s2)); 
    //변수를 printf의 %와 d사이에 넣고싶다...
    printf("%d %7d",sizeof(s1),sizeof(s2));
}
void ex_7()
{
    /*
    double형 변수를 1.0/3.0으로 설정하고 float형
    변수를 1.0/3.0으로 설정하는 프로그램을 작성 
    
    */
    double v1 = 1.0/3.0;
    float v2 = 1.0/3.0;

    // printf("%.4f %.4f", v1, v2);
    // printf("%.12f %.12f", v1, v2);
    // printf("%.16f %.16f\n", v1, v2);
    // printf("%.16f %.16f", FLT_DIG, DBL_DIG) ;
}

void ex_8()
{
    /**주행한 거리는 마일 단위로 묻고 소비한 휘발유의 양은
     * 갤런단위로 묻는 프로그램을 작성
     * 
     * 1. 갤런당 마일수  소수점 아래 1자리까지
     * 2. 1마일은 1.609킬로
     * 갤런당 마일수를 100킬로미터당 리터수 소수점 아래 1자리 
     * 
     * 마일 / 갤런 
     */
    float per_mile = GELON/MILE;
    float h100_per_hour = per_mile *1.609;
     printf("연비가 %.1f km/Hour로 굉장히 안전하겠네요 아우디세요?", h100_per_hour);
    

}