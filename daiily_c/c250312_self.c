#include <stdio.h>
#include <stdlib.h>

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
    int *numPtr;
    numPtr = malloc(sizeof(int));
    *numPtr = 10;
    printf("%d\n", *numPtr);
    free(numPtr);

    return 0;
}

