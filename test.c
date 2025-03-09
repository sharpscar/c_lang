#include <stdio.h>

int main() {

    printf("%%c를 사용한 결과: %c\n",'a');          //문자
    printf("%%s를 사용한 결과:%s\n", "즐거운 c언어");   //문자열
    printf("\n");
    printf("%%f를 사용한 결과:%f\n", 0.123456);
    printf("%%f를 사용한 결과:%f\n",0.123456789); //소수점 6자리까지만 표현
    printf("\n");
    printf("%%o를 사용한 결과:%o\n", 123); //8진수 정수
    printf("%%x를 사용한 결과:%x\n", 123); //16진수 정수
    printf("\n");
    printf("%%g를 사용한 결과:%g\n",0.001234); //값에따라 %f나 %e   
    printf("%%g를 사용한 결과:%g\n", 0.00001234); //값에따라 %f나 %e
    printf("%%G를 사용한 결과:%G\n",0.000001234); //값에따라 %f %E

    int num01, num02;

    printf("첫번째 정수를 입력하세요:");
    scanf("%d", &num01);
    printf("두번째 정수를 입력하세요:");
    scanf("%d", &num02);
    
    printf("입력하신 두 정수의 합은 %d입니다.\n", num01+num02);
    
  
    int num01, num02;
    printf("두 개의 정수를 입력하세요:");

    scanf("%d %d", &num01, &num02);

    printf("입력하신 두 정수를 8진수로 나타내면 %o와 %o가 되고,\n", num01, num02);
    printf("입력하신 두 정수를 16진수로 나타내면 %x와 %x가 됩니다.\n", num01, num02);
  
   
    return 0;
    
    unsigned long num=  4294967295; // int형 타입이 저장할수 있는 최댓값
    
    
    printf("%d", num); 

    

    printf("%d", num); 

    return 0;    
    
}


/*
이것은 주석이다. 근데 왜 이탤릭? 옆으로 누웠니?

printf()함수는 문자열 포매팅
*/

