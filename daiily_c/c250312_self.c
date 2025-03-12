#include <stdio.h>
#include <stdlib.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

    // 다음 소스 코드를 완성하여 10과 20이 각 줄에 출력되게 만드세요.

int main()
{
    // int *numPtr;
    // int num1 = 10;
    // int num2 = 20;

    // numPtr = &num1;
    // printf("%d\n", *numPtr);

    // numPtr = &num2;
    // printf("%d\n", *numPtr);

  

    // printf("%d\n", *numPtr);
    // int *numPtr;
    // numPtr = malloc(sizeof(int));
    // *numPtr = 10;
    // printf("%d\n", *numPtr);
    // free(numPtr);

    // char c1 = '0';
    // char c2 = 0;
    // // %c 문자를 %d 숫자를
    // printf("%c, %d\n", c1,c1);
    // printf("%c, %d\n", c2,c2);
    
    // char c3 = 'a';
    // // %c 문자를 %d 숫자를
    // printf("%c %d\n", 'a'+1, 'a'+1);
    // printf("%c %d\n", 97+1, 97+1);

    //입력값을 변수에 저장하겠어
    // int num1;
    // float num2;
    // char c1;
    // printf("숫자, 소수숫자, 문자1개 를 차례로 입력해라!");
    // scanf("%d %f %c", &num1, &num2, &c1);

    // printf ("%d %.2f %c 데헷!", num1, num2, c1);
    // char s1[LEN_INPUT1];
    // char s2[LEN_INPUT2];
    // scanf("%s %s", s1, s2);
    // printf("%s", s1,s2);

    char *v_effect;
    v_effect = "베르테르 효과 또는 모방 자살 효과는 유명인 또는 평소 선망하거나 존경하던 인물이 자살할 경우,\
    유명인이 자신과 비슷한 어려움에 처해 있던 것을 느꼈을 때 심리적으로 영향을 더 크게 받고 유명인과 자신을 동일시여겨 \
    유사방식으로 잇따라 자살을 시도하는 현상을 말한다.";

    printf("%s", v_effect);

    return 0;
/*
10진 16진   문자  표기  설명
10 	0x0A 	LF 	\n 	개행, 라인 피드(Line Feed), 새 줄(new line), 줄바꿈
13 	0x0D 	CR 	\r 	복귀, 캐리지 리턴(Carriage Return), 줄의 끝에서 시작 위치로 되돌아감
9 	0x09 	TAB 	\t 	수평 탭(horizontal tab)\
*/

}

