#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void summing();
void while_1();
void compfit();
void trouble();
void boolean_1();
void test_arr();
void for_cube();

int main()
{
    // summing();
    // while_1();
    // compfit();
    // trouble();
    // boolean_1();
    // test_arr();
    // for_cube();

    return 0;
}
void for_cube()
{
    int num;
    printf("    n   n의 세제곱\n");
    for (num=1; num <=6; num++)
        printf("%5d %5d\n", num, num*num*num);
}
void test_arr()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 }; 
    for (int i =0; i<10; i++)
    {
        printf("%d\n", numArr[i]);
    }

    //배열에 sizeof 연산자를 사용해보면 배열이 차지하는 전체 공간이 출력됩니다. 따라서 int numArr[10];은 크기가 4바이트인 int형 요소가 10개 모여있으므로 40이 출력됩니다.
    printf("%d\n", sizeof(numArr));
    //배열의 크기(요소 개수)를 구할 때는 배열이 차지하는 전체 공간에서 요소의 크기로 나눠줍니
    printf("%d\n", sizeof(numArr)/sizeof(int));
}

void boolean_1()
{
    long num;
    long sum =0L;
    // _Bool input_is_good;
    bool input_is_good;

    printf("합을 구할 정수를 하나 입력하시오");
    printf("(끝내려면 q): ");
    input_is_good = (scanf("%ld", &num) ==1);
    while(input_is_good)
    {
        sum = sum+num;
        printf("다음 정수를 입력하시오 (끝내려면 q): ");
        input_is_good = (scanf("%ld", &num)==1);
    }
    printf("입력된 정수들의 합은 %ld입니다.\n", sum);
}

void trouble()
{
    long num;
    long sum = 0L;
    int status;
    printf("합을 구할 정수를 하나 입력하시오");
    printf("(끝내려면 q :)");
    status = scanf("%ld", &num);

    while(status=1)
    {
        sum = sum +num;
        printf("다음 점수를 입려하시오 (끝내려면 q): ");
        status = scanf("%ld", &num);
    }
    printf("입력된 정수들의 합은 %ld입니다. \n", sum);
}
void compfit()
{
    const double ANSWER = 3.14159;
    double response;

    printf("원주율의 값이 얼마지? \n");
    scanf("%lf", &response);
    while(fabs(response -ANSWER) > 0.0001)
    {
        printf("다시말해봐!\n");
        scanf("%lf", &response);
    }
    printf("충분히 가깝다! \n");
}

void while_1()
{
    int n=0;
    while(n++<3);
        printf("n은 %d\n", n);
        
    printf("프로그램이 한 일은 이게 전부다 \n");
    
}

void summing()
{
    long num;
    long sum = 0L;
    int status;

    printf("합을 구할 정수를 하나 입력하시오");
    printf("(끝내려면 q):");

    status = scanf("%ld", &num); 
    // num 에다가 특정 숫자를 최초로 한번 받아서 초기화 해주고 status변수에 데이터의 수를넣어준다. 
    // num <- 숫자값 , status <- 데이터의 수  
    // 틀렸다.! status에는 1이 들어간다 (scanf()는 입력받은 데이터의 개수를 리턴)


    // 당연히 초기화된 status변수에 1 이들어간다.
    while(status==1)
    {
        sum = sum+num; //sum 변수에 입력했던 숫자를 더해준다.
        printf("다음 정수를 입력하시오(끝내려면 q): ");
        status = scanf("%ld", &num); 

    }
    printf("입력된 정수들의 합은 %ld입니다. \n", sum);
}