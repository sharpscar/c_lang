#include <stdio.h>

void day_mon1();
void no_data();
void some_data();
void day_mon2();
void designate();
int main()
{
    // day_mon1();
    // no_data();
    // some_data();
    // day_mon2();
    designate();
    return 0;
}
void designate()
{
    const int MONTHS=12;
    int days[MONTHS] = {31,28,[4]=31,30,31,[1]=29};
    int i;

    for(i=0; i< MONTHS; i++)
    {
        printf("%2d %d\n", i+1, days[i]);
    }

}

void day_mon2()
{
    const int MONTHS=12;
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (index=0; index< sizeof days/ sizeof days[0]; index++)
    {
        printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);
    }
}


void some_data()
{
    const int SIZE=4;
    int some_data[SIZE] = {1492,1066};
    int i;

    printf("%2s%14s\n","i","some_data[i]");
    for(i=0;i<SIZE; i++)
    {
        printf("%2d%14d\n", i, some_data[i]);
    }
}

void no_data(){
    const int SIZE=4;
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i","nodata[i]");

    for (i=0;i<SIZE; i++)
    {
        printf("%2d%14d\n",i,no_data[i]);
    }
}
void day_mon1()
{
    const int MONTHS=12;
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index=0; index<MONTHS; index++)
    {
        printf("%2d월: 날짜 수 %2d\n", index+1, days[index]);
    }
}
