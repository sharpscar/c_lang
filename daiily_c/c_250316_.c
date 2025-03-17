#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10

/**
 * 포인터의 값은 그것이 가리키는 객체의 주소이다. 내부적으로 주소를 나타내는 방식은 하드웨어에 따라 다르다 pc와 매킨토시를 포함
 * 하여 많은 컴퓨터들이 바이트 단위로 주소를 매긴다. 이것은 메모리의 각 바이트들이 연속적으로번호가 매겨져 있다는것을 의미한다. 
 * 여기서 double형변수와 같이 큰 객체의 주소는 일반적으로 그 객체의 첫 번째 바이트의 주소이다.
 * 
 * 포인터에 * 연산자를 적용하면, 그 포인터가 가리키는 객체에 저장되어 있는 값을 얻는다.
 * 포인터에 1을 더하면 그 포인터가 가리키는 객체의 바이트수 크기만큼 포인터 값이 증가한다. 
 * 
 * dates +2  == & dates[2]
 * *(dates+2) == date[2]
 * 
 * 이러한 관계는 배열과 포인터가 밀저한 연관이 있음을 보여준다. 이들은 배열의 개별적인 원소에 접근하고, 그 값을 얻는 데 
 * 포인터를 사용할 수 있다는 것을 의미한다. 본질적으로, 이것은 같은 것을 나타내는 두가지 다른 표기이다. 실제로 c언어 표준은 
 * 배열 표기를 포인터로 서술한다. 즉 ar[n]이 *(ar+n)을 의미 하도록 정의한다. *(ar +n)을 메모리 위치 ar로 가라 n개의 
 * 기억단위만큼 이동하라 거기에 있는 값을 꺼내라 라는 의미라고 생각할수 있다.                   ar[n] == *(ar+n)
 * 또한 *(dates+2) 와 *dates+2를 혼동하지 말라 간접 연산자 *가 +보다 우선순위가 높기 때문에 *dates+2는 (*dates)+2를 의미한다.
 */
void sum_arr_2();
void day_mon1();
void no_data();
void some_data();
void day_mon2();
void day_mon3();
void designate();
void rain();
void pnt_add();
void sum_arr_1();
int sump(int* start, int * end);
int sum(int ar[], int n);
void order();
int main()
{
    // day_mon1();
    // no_data();
    // some_data();
    // day_mon2();
    // designate();
    // bounds();
    // rain();
    // pnt_add();
    // day_mon3();
    // sum_arr_1();
    // sum_arr_2();
    order();
    return 0;
}

void order()
{
    int data[2] = {100, 200};
    int moredata[2] = {300, 400};

    int * p1, *p2, *p3;
    p3 = moredata;
    printf(" *p1 = %d, *p= %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p++= %d, *++p2 = %d, (*p3)++ =%d\n", *p1, *p2, *p3);

}
void sum_arr_2()
{

    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("구슬의 전체 개수는 %ld개입니다.\n", answer);

}
int sump(int* start, int * end)
{
    int total = 0; 
    while(start<end)
    {
        total += *start;
        start++;
    }
    return total;
}
void sum_arr_1()
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("구슬의 전채 개수는 %ld개입니다.\n", answer);
    printf("marbles의 크기는 %zd바이트 입니다.\n", sizeof marbles);
}


int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for(i =0; i<n; i++)
    {
        total += ar[i];
        
    }
    printf("ar의 크기는 %zd바이트입니다.\n", sizeof ar);
    return total;

}
void day_mon3()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index=0; index< MONTHS; index++)
    {
        printf("%2d월 : 날짜 수 %2d\n", index+1, *(days+index));
    }
}

void pnt_add(){
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates; // 4개의 short 형 배열을 pti변수에 할당 - 포인터변수에 할당하는 느낌이라 주소값전달이라고 이해됨
    ptf = bills;  // 4개의 더블형 배열을 마찬가지로 포인터 변수에 할당 마찬가지 주소값전달이라고 이해됨
    printf("%23s %15s\n", "short", "double"); // 이 둘을 문자열로 출력 (주소가 나오지 않을까?)

    for(index=0; index< SIZE; index++)
    {
        printf("포인터 +%d: %10p %10p\n", index, pti+index, ptf+index); //정수형, 주소 주소 형식 
    }

}
void designate()
{
    // const int MONTHS=12;
    int days[12] = {31,28,[4]=31,30,31,[1]=29};
    int i;

    for(i=0; i< MONTHS; i++)
    {
        printf("%2d %d\n", i+1, days[i]);
    }

}

void day_mon2()
{
    // const int MONTHS=12;
    const int days[12] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (index=0; index< sizeof days/ sizeof days[0]; index++)
    {
        printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);
    }
}


void some_data()
{
    // const int SIZE=4;
    int some_data[4] = {1492,1066};
    int i;

    printf("%2s%14s\n","i","some_data[i]");
    for(i=0;i<4; i++)
    {
        printf("%2d%14d\n", i, some_data[i]);
    }
}

void no_data(){
    
    int no_data[4];
    int i;

    printf("%2s%14s\n", "i","nodata[i]");

    for (i=0;i<4; i++)
    {
        printf("%2d%14d\n",i,no_data[i]);
    }
}
void day_mon1()
{
    // const int MONTHS=12;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;


    for (index=0; index< 12; index++)
    {
        printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);
    }
}
void bounds()
{
    
    int value1 = 44;
    int arr[4];
    int value2 = 88;
    int i;

    printf("value1 = %d, value2 = %d\n", value1, value2);
    for( i= -1; i<= 4; i++)
    {
        arr[i]= 2*i+1;

    }

    for(i=-1; i<7; i++)
    {
        printf("%2d %d\n" , i, arr[i]);
        printf("value1= %dc value2 =%d\n", value1, value2);
        printf("arr[-1]의 주소: %p\n", &arr[-1]);
        printf("arr[4]의 주소: %p\n", &arr[4]);
        printf("value1의 주소: %p\n", &value1);
        printf("value1의 주소: %p\n", &value2);
    }


}

void rain()
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4, 2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3, 0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1, 2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6, 1.7,4.3, 6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0, 0.0,1.3,2.6,5.2}

    };
    int year, month;
    float subtot, total;

    printf("년도    강우량(인치)\n");
    for(year=0, total=0; year< YEARS; year++)
    {
        for(month=0, subtot=0; month<MONTHS; month++)
            subtot +=rain[year][month];  
        printf("%5d %15.1f\n", 2010 + year, subtot); 
        total +=subtot;
    }
    printf("\n연평균 강우량은 %.1f인치입니다. \n",total/YEARS); // 각 해의 모든 12개월 값을 더한후 평균값을 가져온다.
    printf("월 평균 강우량은 다음과 같습니다.\n\n");
    printf("JAN Feb  Mar  Apr  MAY  JUN  JUL  AUG  SEP  OCT ");
    printf("NOV DEC\n");

    for(month =0; month <MONTHS; month++)
    {
        for(year =0, subtot=0; year < YEARS; year++)
            subtot += rain[year][month]; // 각월의 값을 더한후 /5로 나누면 해마다 해당 달의 평균강우량이나온다.
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");
}
