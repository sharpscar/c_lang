#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print_memory_address();
void day_mon1();
void randint();
#define MONTHS


int main()
{
    // print_memory_address();
    // day_mon1();

    randint();
    return 0;
}
/** 메모리상의 배열의 시작점을 출력 하겠당
 * 주소간 약 32차이가 난다.  int = 4byte  
 * 
 */
void print_memory_address()
{

    int ints[5] = {1,2,3,4,5};
    int ints_1[5] = {6,7,8,9,1};

    //왜 시작값이 나올까? 그 첫 위치의 값좀 확인해줘 
    printf("%d %d", *ints, *ints_1);  
}
void randint()
{
    srand((unsigned int)time(NULL));
    int randint;
    randint = (-1 +rand() %5);
    printf("%d",randint);
    // return randint;
}

