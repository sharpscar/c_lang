#include <stdio.h>
#include <stdbool.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void starbar(void);

void echo_();
void display(char cr, int lines, int width);
void showchar2();
void showchar();
void show_n_char(char ch, int num);
void lethead2();
void lesser();
int imin(int n, int m);
int imax(int , int );
void proto();
void loccheck();
void mikado(int);
void swap1();
void swap3();
void interchange(int u, int v);
void interchange_(int *u, int *v); //포인터 사용 함수

 //입력이 정수인지 검사한다.
 long get_long(void);

 // 범위 한계가 유효한지 검사한다.
 bool bad_limits(long begin, long end, long low, long high);

 // a에서 b까지 범위에 있는 정수들의 제곱의 합을 계산한다.
 double sum_squares(long a, long b);


void display(char cr, int lines, int width)
{
    int row, col;
    
    for (row=1; row<= lines; row++)
    {
        for (col=1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }

}


int main()
{
    
    // echo_();
    // guess();
    // showchar2();
    // starbar();    
    // printf("%s\n", NAME);
    // printf("%s\n", ADDRESS);
    // printf("%s\n", PLACE);
    // starbar();
    // lethead2();
    // lesser();

    // proto();
    // loccheck();
    //  swap1();
    swap3();




    return 0;
}
/**
 * 값을 리턴하거나 포인터를 사용해서 역참조하는 방식이 아니라면
 * 값은 그대로 남아있게된다. 이건 당연한거다.
 * 다음 예제는 함수는 한번에 하나의 값만 주고받아야하는데 이를 우회하는 방법중 포인터를 
 * 소개하는 내용이다. 
 * 
 */
void swap1()
{
    int x=5,y=10;
    printf("교환 전 x=%d, y=%d\n", x,y);
    interchange(x,y);
    printf("교환 후 x=%d, y=%d\n", x, y);

}

void swap3()
{
    int x=5, y=10;
    printf("교환 전 x=%d, y=%d\n", x,y);
    interchange_(&x, &y);
    printf("교환 후 x=%d, y=%d\n", x, y);

 
}
void interchange(int u, int v)
{
    int temp;
    temp = u;
    u =v;
    v =temp;
}

void interchange_(int *u, int *v)
{
    int temp;
    temp= *u;
    *u = *v;
    *v = temp;
}

void loccheck()
{
    int pooh =2, bah =5;
    printf("lockcheck()에 있는pooh =%d, &pooh= %p\n", pooh, &pooh);  // 2
    printf("lockcheck()에 있는bah =%d, &bah= %p\n", bah, &bah);    //5
    mikado(pooh);                                                   //2


}
void mikado(int bah)
{
    int pooh =10;
    printf("mikado()에 있는pooh =%d, &pooh= %p\n", pooh, &pooh);    //10
    printf("mikado()에 있는bah =%d, &bah= %p\n", bah, &bah);       //2
    
}
void proto()
{
    printf("(%d, %d)에서 큰것은 %d\n",3,5, imax(3,5));
    printf("(%d, %d)에서 큰것은 %d\n",3,5, imax(3.0,5.0));
    
}
int imax(int n, int m)
{
    return (n>m? n:m);
}
void lesser()
{
    int evil1, evil2;
    printf("두 정수를 입력하시오(끝내려면q): \n");
    while(scanf("%d %d", &evil1, &evil2) ==2 )
    {
        printf("(%d,%d)에서 작은것은 %d\n", evil1, evil2, imin(evil1, evil2));
        printf("두 정수를 입력하시오 (끝내려면 q):\n");
    }
    printf("종료!\n");
}

int imin(int n, int m)
{
    int min;
    if(n<m)
        min= n;
    else
        min=m;
    return min;
}

void starbar(void)
{
    int count;
    for (count =1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');

}

void show_n_char(char ch, int num)
{
    int count;
    for (count=1; count<= num;count++)
    {
        putchar(ch);
    }
}

void lethead2()
{

    int spaces;
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    spaces = (WIDTH-strlen(ADDRESS))/2;

    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH- strlen(PLACE))/2);

    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
}

void echo_(){
    char ch;
    while((ch = getchar())!='#')
    {
        putchar(ch);
    }
}


void echo_eof(){
    char ch;
    while((ch = getchar())!=EOF)
    {
        putchar(ch);
    }
}

void guess()
{
    int guess =1;
    printf("1에서 100까지 범위에 있는 한 정수를 생가하시오.\n");
    printf("내가 추측하지오 . 내 추축이 맞으면 y로 응답하고, \n");
    printf("내 추측이 틀리면 n으로 응답하시오.\n");
    printf("당신이 생각한 수가 %d입니까?\n", guess);
    while(getchar() != 'y')
        printf("그러면 %d입니까?\n", ++guess);
        while(getchar() !='\n')
            continue;
        printf("그것봐요 내가 맞출수 있다고 했자나요\n");
}

/*
사용자가 응답도하기전에 프로그램이 일사천리로 종료된다 무엇이 잘못되었을까
이번에도 역시 개행문자가 범인이다. scanf함수는 개행무자를 입력큐에 남겨둔다
그런데 scanf 와는 달리 getchar()는 개행문자를 건너뛰지 ㅇ낳는다. 그래서 
루프 의 다음 사이클에서 사용자가 응답도 하기전에 getchar()가 이 개행문자를 읽는다.
그러면 ch에 이 개행문자가 대입되고, 이제 개행문자인 ch는 루프를 끝내는 조건이된다.

이문제를 해결하려면 입력의 한 사이클에서 마지막으로 입력된 수와 다음 라인의 시작위치에 
타이핑한 문자 사이에 들어있는 개행 문자와 스페이스들을 프로그램이 건너뛰어야 한다.
또한 getchar()검사 뿐만 아니라 scanf단계에서도 프로그램을 끝낼수 있다면 더 좋을것이다. 
showchar2에 내용이 이어짐


*/

void showchar()
{
    int ch;
    int rows, cols;

    printf("문자와 두개의 정수를 입력하시오.\n");
    while((ch=getchar())!='\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("또 다른 문자와 두개의 정수를 입력하시오.\n");
        printf("끝내려면 그냥 엔터키를 누르시오.\n");
    }
    printf("안녕\n");
}

void showchar2()
{
    int ch; //출력할 문자
    int rows, cols; //행수와 열수
    printf("문자 하나와 두개의 정수를 입력하시오.\n");
    
    while((ch = getchar())!='\n')
    {
        if(scanf("%d %d", &rows, &cols) !=2) //엔터를 포함해서 입력값이 2개가 아닌경우 반복문 탈출
        {
            break;
        }
        display(ch, rows, cols);
        while(getchar() != '\n')            // 들어오는 입력이 개행문자가 아닌경우 
            continue;
            printf("또다른 문자와 두개의 정수를 입력하시오.\n");
            printf("끝내려면 그냥 enter키를 누르시오.\n");
    }
    printf("안녕!\n");



}

void checking()
{
   


}

 //입력이 정수인지 검사한다.
 long get_long(void);

 // 범위 한계가 유효한지 검사한다.
 bool bad_limits(long begin, long end, long low, long high);

 // a에서 b까지 범위에 있는 정수들의 제곱의 합을 계산한다.
 double sum_squares(long a, long b);
