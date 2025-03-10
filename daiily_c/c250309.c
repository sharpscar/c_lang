#include <stdio.h>
// 두 수중 더 큰수를 리턴한다.
int find_bigger(int a, int b);

int main(){
    int a = 10;
    int b = 20;
    int result = 0;

    // 두 수중 더 큰수를 리턴한다.
    result = find_bigger(a,b);

    
    printf("a와 b중 큰 수는 %d 입니다. \n");
    //여기는 메인 공간 입니다.
    return 0;
}

// 두 수중 더 큰수를 리턴한다.
int find_bigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }else
    {
        return b;
    }
}