#include <stdio.h>
// 두 수중 더 큰수를 리턴한다.
void get_grade(int num);

int main(){
    int score = 94;
    
    get_grade(score);

    //여기는 메인 공간 입니다.
    return 0;
}

// 등급을 출력한다.
void get_grade(int num)
{    
    if ((num <= 100)&& (num >= 96))
    {
        printf("이학생의 학점은 A입니다.");
    }
    else if ((num <= 95)&& (num >= 91))
    {
        printf("이학생의 학점은 B입니다.");
    }
    else if ((num <= 90)&& (num >= 86))
    {
        printf("이학생의 학점은 C입니다.");
    }
    else if ((num <= 85)&& (num >= 81))
    {
        printf("이학생의 학점은 D입니다.");
    }
    else if ((num <= 80)&& (num >= 76))
    {
        printf("이학생의 학점은 E입니다.");
    }
    else if ((num <= 75)&& (num >= 71))
    {
        printf("이학생의 학점은 F입니다.");
    }
    
}
