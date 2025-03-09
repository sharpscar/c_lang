#include <stdio.h>

void swap(int a ,int b);
void swap_addr(int *a ,int *b);
void changeArray(int * ptr);


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


    // int a=10,b=20,temp;
    // int *x, *y;
    
    // x=&a;
    // y=&b;
    // printf("a: %d b: %d\n", a,b);
    // temp=*x;
    // *x=*y;
    // *y=temp;
    // printf("a: %d b: %d\n", a,b);
/*

아니 이게 맞나?  *x가 갖고있는것은 a의 주소  a의 주소를 x가 참조하고 b의 주소를 y가 참조하는 상황에서
x와 y를 교환 했다고  a,b가 값이 바뀐다고 ?주소를 바꿔버렸다. 가리키는 변수를 바꿨다고 값이 따라간다고



    int arr[3] = {5,10,15};
    int *ptr = arr;
    for (int i=0;i<3; i++)
    {
        printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    }
    for (int i =0; i<3; i++)
    {
        printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
    }
    ptr[0]=100;
    ptr[1]=200;
    ptr[2]=300;

    for (int i=0; i<3; i++)
    {
        printf("배열 arr[%d]의 값 %d\n", i, *(arr+i));
    }

    for (int i =0; i<3; i++)
    {
        printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr+i));
    }

    printf("arr자체의 값 %d\n",arr);
    printf("arr[0]의 주소: %d\n", &arr[0]);
*/

    // int a=10;
    // int b=20;
    // printf("a의 주소 %d\n",&a);
    // printf("b의 주소 %d\n",&b);

    // printf("swap함수전 => a: %d, b:%d\n", a,b);
    // // 값 복사
    // swap(a,b);
    // printf("swap함수후 => a: %d, b:%d\n", a,b);

    // //주소값에 의한 복사
    // printf("주소값에 의한 복사전메인함수 => a: %d, b:%d\n", a,b);
    // swap_addr(&a,&b);
    // printf("주소값에 의한 복사후 메인함수 => a: %d, b:%d\n", a,b);

    int arr2[3] = {10,20,30};

    // changeArray(arr2);
    changeArray(&arr2[0]);
    for(int i=0; i<3; i++)
    {
        printf("%d\n", arr2[i]);
    }
    

    return 0;
}
void swap(int a ,int b)
{
    int temp = a;
    a=b;
    b=temp;

    printf("(swap함수내)a의 주소 %d\n",&a);
    printf("(swap함수내)b의 주소 %d\n",&b);
    printf("(swap함수내) => a: %d, b:%d\n", a,b);

}

void swap_addr(int *a ,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;

 
    printf("주소값 전달 (swap함수내) => a: %d, b:%d\n", *a,*b);

}

void changeArray(int * ptr)
{
    ptr[2]=50;
}