#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int * make_r_number_list();
int make_r_number();
int is_in(int number, int list[], int index);
int main()
{   
    int * r_list = make_r_number_list();

    for (int i; i<7; i++)
    {
        printf("%d\n", r_list[i]);
    }
    return 0;
}

int * make_r_number_list()
{

   //로또 번호를 생성한다.
   int lotto_n[SIZE] ;
   int index =0;
   //중복 검사를 한다. 

    for (int i =0; i<SIZE; i++)
    {
       srand((unsigned)time(NULL));
       int r_number = make_r_number();

       //리스트에 해당 하는 숫자가 없으면 넣어라
       if (is_in(r_number,lotto_n,index)==1)
       {
           lotto_n[i] = r_number;
           index++;
       }
       
       printf("%d\n", lotto_n[i]);
    }
    return lotto_n;
}

int is_in(int number, int list[], int index)
{
    int i;
    for (i=0; i<=index;i++)
    {
        if (number== list[i])
            return 0;
    }
    return 1;
}

// 로또 번호를 생성 해서 리턴한다.
int make_r_number()
{
    
    // int rotto[SIZE];
    int r_number;
    int flag;

    r_number = (rand()%45) +1;
   
    printf("%d\n", r_number);
    
    return r_number;
}