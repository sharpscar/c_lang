#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define DENSITY 62.4

void talkback();
void praise1();
void praise2();
void pizza();
void defines();
void printout();
void width();
void floats();
void flags();
void stringf();
void intconv();


int main()
{
    
    // talkback();
   //  praise1();
   // praise2();
   // pizza();
   // defines();
   // printout();
   // width();
   // floats();
   //  flags();
   // stringf();
   intconv();
    return 0;

}

/**
 * 
 * 이 구문은 마치 숙어처럼 쓰일거같다. 
 *  input_is_good = (scanf("%ld", &num) ==1); 
 * scanf함수가 데이터를 의도한대로 입력받았다면 1을 출력 ! 그리고 그 참/거짓을 input_is_good 이라고 
 * 입력 유효성 검증 하듯이 검사한다. 
 */
void intconv()
{
   const int PAGES =  336;
   const int WORDS = 65618;
   short num = PAGES;
   short mnum = -PAGES;
   printf("short형,unsigned short형 num:%hd %hu\n", num,num);
   printf("short형,unsigned short형 -num:%hd %hu\n", mnum,mnum);
   printf("int형, char형 num: %d %c\n", num, num);
   printf("int형, short형, char형 WORDS: %d %hd %c\n",WORDS,WORDS,WORDS);


}

void stringf()
{
   const char* BLURB = "Authentic imitation!";
   printf("[%2s]\n",BLURB);
   printf("[%111s]\n",BLURB);
   printf("[%24.5s]\n",BLURB);
   printf("[%-24.5s]\n",BLURB);



}
void flags()
{
   printf("%x %X %#x\n", 31,31,31);
   printf("**%d**% d**% d**\n", 42,42,-42);
   printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);

}
void floats()
{
   const double RENT = 3852.99;

   printf("*%f*\n", RENT);
   printf("*%e*\n", RENT); //지수표현방식
   printf("*%4.2f*\n", RENT);
   printf("*%3.1f*\n", RENT);
   printf("*%10.3f*\n", RENT);   // 10자리에서 오른정렬
   printf("*%10.3E*\n", RENT);  //지수를 표현한다.
   printf("*%+4.2f*\n", RENT);  // 기호를 앞에 붙인다. 
   printf("*%010.2f*\n", RENT); //앞을 전부 0으로 채운다.


}

 void width()
{
   const int PAGES = 959;
   printf("*%d*\n", PAGES);
   printf("*%2d*\n",PAGES);
   printf("*%10d*\n",PAGES);
   printf("*%-10d*\n",PAGES);
}
void printout()
{
   const float PI = 3.14159;
   int number=7;
   float pies=12.75;
   int cost =7800;

   printf("%d명의 경쟁자가 %f판의 딸기 파이를 먹었다.\n", number, pies);
   printf("The value of pi is %f.\n",PI);
   printf("잘 가시라! 그대는 내가 소유하기에 과분하여라,\n");
   printf("%c%d\n", 'S', 2 *cost);

}
void defines()
{
   printf("이 시스템이 표현하는 수의 한계:\n");
   printf("int형 최대값: %d\n", INT_MAX);
   printf("long long형 최소값: %lld\n", LLONG_MIN);
   printf("이 시스템에서 1바이트 %d비트이다.\n", CHAR_BIT);
   printf("double형 최대값: %e\n",DBL_MAX);
   printf("float형 최소값: %e\n", FLT_MIN);
   printf("float형 정밀도는 소수점 아래 %d자리까지 \n", FLT_DIG);
   printf("float 형 epsilon = %e\n", FLT_EPSILON);
}

 void pizza()
 {
   const float PI = 3.14159;
   float area, circum, radius;
   printf("피자의 반지름이 얼마냐?\n");
   scanf("%f", &radius);
   area = PI * radius * radius;
   circum = 2.0 *PI* radius;
   printf("피자의 기본 매개변수는 다음과 같다:\n");
   printf("circumference = %1.2f, area=%1.2f\n", circum, area);
 }
 void talkback(){
    float weight, volume;
    int size, letters;
    char name[40];
    printf("하이! 이름이 뭐에요:\n");
    scanf("%s", name);
    printf("%s씨, 몸무게는 몇파운드나 나가요?\n", name);
    scanf("%f", &weight);
    size= sizeof name;
    letters = strlen(name);
    volume = weight/DENSITY;
    printf("옳거니, %s씨의 몸은 %2.2f입방피트를 차지합니다.\n",name, letters);
    printf("저장하려면 %d바이트가 필요합니다.\n", size);

    return 0;
 }
 // p122
 void praise1(){
    const char *PRAISE = "You are an extraordinary being";

    char name[40];
    printf("실례지만 성함이 어떻게 되시는지?\n");
    scanf("%s", name);
    printf("반갑습니다,%s씨 . %s\n", name, PRAISE);
 }
 void praise2()
 {
   char name[40];
    const char *PRAISE = "You are an extraordinary being";
    printf("실례지만 성함이 어떻게 되시는지?\n");
    scanf("%s", name);
    printf("반갑습니다,%s씨 . %s\n", name, PRAISE);
    printf("이름은 %zd글자인데 메모리셀 %zd개를 차지합니다.\n", strlen(name), sizeof name);
    printf("감탄문은 %zd글자인데", strlen(PRAISE));
    printf("메모리셀 %zd개를 차지합니다.\n",sizeof PRAISE );
 }