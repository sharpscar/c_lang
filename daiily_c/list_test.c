#include <stdio.h>
#define SIZE 7

int compare_two_list(int com_list[], int user_in_list[]);

int * get_input_numbers();

int main()
{
    // int a_mylist[SIZE] = {1,2,3,4,5,6,10};
    // int b_mylist[SIZE]={1,2,3,4,5,10};
    // int r;

    // r= compare_two_list(a_mylist,b_mylist);

    // printf("%d\n", r);
    
    int * num_list;
    
    //사용자 입력을 받는 함수를 만들겠당!
    
    num_list=get_input_numbers();

    for(int i=0;i<6;i++)
    {
        printf("%d\n",num_list[i]);
    }

    return 0;
}

int * get_input_numbers()
{
    int input_list[6];
    int i1,i2,i3,i4,i5,i6;
   
    printf("6개의 숫자를 입력해주세요\n");
    for (int i=0; i<6; i++)
    {
        printf("%d번 번호를 눌러주세요: " , i+1);
        scanf("%d", &input_list);
        while(getchar() != '\n');
    }


    return input_list;
}

int compare_two_list(int com_list[], int user_in_list[])
{
    int wincnt=0;
    //여기서 주의해야 할건 컴퓨터의 배열은 7개 유저의 배열은 6개의 요소가 있다.
    //2등의 경우 컴배열의 마지막 요소가 유저 리스트에 있는경우 이다.
    // 파이썬에선 intersection? 교집합 기능을 이용해서 몇갠지 확인했다. 

    for(int i=0; i<SIZE-1;i++)
    {
        for (int j=0; j<SIZE-1;j++)
        {
            if (com_list[i]==user_in_list[j])
            {
                wincnt++;
            }
        }
    }
    // wincnt 의 갯수에 따라 등수를 리턴하자
    if (wincnt==6)
    {
        return 1;
    }else if(wincnt==5)
    {
        //2등인경우
        for(int k=0; k<SIZE-1;k++)
        {
            if(user_in_list[k]==com_list[6])
            {
                return 2;
            }
        }
        //3등인 경우 
        return 3;
    }else if(wincnt==4)
    {
        return 4;
    }else if(wincnt==3)
    {
        return 5;
    }else{
        return 0; //꽝 ㅋ
    }
}