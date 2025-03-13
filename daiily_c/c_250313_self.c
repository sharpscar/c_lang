#include <stdio.h>
#define DENSITY 62.4

void talkback();
void praise1();
int main()
{
    // char s1[5][100]; //최대 100길이의 문자 입력받음

    // printf("문자열을 입력 하세요:");

    // for(int i=0; i<5; i++)
    // {
    //     scanf("%s", s1[i]); //
    // }

    // for (int i=0; i<5; i++)
    // {
    //     printf("%s\n", s1[i]);
    // }
    // talkback();
    praise1();

    return 0;

}

/**
 * 
 * 이 구문은 마치 숙어처럼 쓰일거같다. 
 *  input_is_good = (scanf("%ld", &num) ==1); 
 * scanf함수가 데이터를 의도한대로 입력받았다면 1을 출력 ! 그리고 그 참/거짓을 input_is_good 이라고 
 * 입력 유효성 검증 하듯이 검사한다. 
 */

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