#include <stdio.h>

int fmin(float, float);
void chline(char, int,int);
void ex_01();
void ex_03(char a, int b, int c);

int main()
{
    ex_01();
    // ex_02(); //  ********
    // char a = '$';
    // int b=8, c=8;
    // ex_03( a,  b,  c);
}
void ex_01()
{
    float a,b,result;
    a=10.0;
    b=20.0;
    result = fmain(a,b);
}

int fmin(float a, float b)
{
    // printf("fmin 함수 내의 변수 %f  %f", a,b);
    return (a < b ? a:b);
}
/** 사용자가 요청한 문자를 i~j열까지 출력하는 함수 */
void chline(char ch, int sn,int en)
{
    // printf("chline 함수에서 받은 캐릭터%c\n", ch);
    // printf("chline 함수에서 받은 sn %d\n", sn);
    // printf("chline 함수에서 받은 en %d\n", en);
    int til = en-sn+1;
    show_n_char(' ',sn-1);
    for (int i=0; i<til; i++)
    {   
        // printf("chline함수내에서 %d",til);
        putchar(ch);
        // printf("%s",ch);
        //  **********
    }
}
void ex_02()
{
    char ch='*';
    int i=3;
    int j=10;
    // printf("ex_02함수에서 보내기전 캐릭터%c\n", ch);
    chline(ch, i,j);
}

void show_n_char(char ch, int num)
{
    int count;
    for (count=1; count<= num;count++)
    {
        putchar(ch);
    }
}

/** 하나의 char형과 두개의 int형을 전달인자로 사용하는 함수를 작성하라
 * 이 함수는 그 문자를 출력한다. 첫번째 정수는 출력할 열수 지정 
 * 두번째 정수는 출력할 행수를 지정한다. 이 함수를 사용하는 프로그램을 작성하라
 * 
 */
void ex_03(char a, int b, int c)
{
    int row, col;

    for (row=1; row<= b; row++)
    {
        for (col=1; col<= c; col++)
        {
            putchar(a);
        }
        putchar('\n');
    }
}