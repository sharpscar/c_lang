#include <stdio.h>

int main() {

    // int a= 1;
    // int *pa;

    // pa=&a;

    // printf("a에 저장된 값: %d\n", a);
    // printf("a에 주소: %d\n", &a);
    // printf("pa에 저장된 값(주소): %d\n", pa); //참조
    // printf("pa에 저장된 값(주소)를 역참조한 값: %d\n", *pa); //역참조

    // *pa = 2 ;
    // printf("pa에 저장된 값(주소): %d\n", pa); //참조
    // printf("pa에 저장된 값(주소)를 역참조한 값: %d\n", *pa); //역참조


    int a=10,b=20,temp;
    int *x, *y;
    
    x=&a;
    y=&b;
    printf("a: %d b: %d\n", a,b);
    temp=*x;
    *x=*y;
    *y=temp;
    printf("a: %d b: %d\n", a,b);




    return 0;
}