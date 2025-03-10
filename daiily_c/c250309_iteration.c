#include <stdio.h>
// 두 수중 더 큰수를 리턴한다.
void play_for();
void r_play_for();
void play_while();
void r_play_while();


int main(){
    
    // for문으로 1-10
    // play_for();
    // for문으로 10-1
    // rplay_for();
    //여기는 메인 공간 입니다.
    // while문으로 1-10
    // play_while();
    // while문으로 10-1
    r_play_while();

    return 0;
}
void play_while()
{
    int cnt=1;
    while(cnt<=10)
    {
        
        printf("%d\n", cnt);
        cnt++;
    }
}

void r_play_while()
{
    int cnt=10;
    while(cnt>0)
    {
        
        printf("%d\n", cnt);
        cnt--;
    }
}


void play_for()
{
    for (int i=0; i<11; i++)
    {
        printf("%d\n",i);
    }
}

void r_play_for()
{
    for (int i=10; i>0; i--)
    {
        printf("%d\n",i);
    }
}
