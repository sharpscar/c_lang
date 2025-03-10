#include <stdio.h>
// 두 수중 더 큰수를 리턴한다.
void get_grade(int num);

int main(){
    int score = 80;
    
    get_grade(score);

    //여기는 메인 공간 입니다.
    return 0;
}

// 두 수중 더 큰수를 리턴한다.
void get_grade(int num)
{
    switch (num)
    {
    case  100:
    case  99:
    case  98:
    case  97:
    case  96:
        printf("이학생의 학점은 A입니다.");
        /* code */
    break;
    case  95:
    case  94:
    case  93:
    case  92:
    case  91:
        printf("이학생의 학점은 B입니다.");
        /* code */
        break;
    case  90:
    case  89:
    case  88:
    case  87:
    case  86:
        printf("이학생의 학점은 C입니다.");
        /* code */
        break;
    case  85:
    case  84:
    case  83:
    case  82:
    case  81:
        printf("이학생의 학점은 D입니다.");
        /* code */
        break;
    case  80:
    case  79:
    case  78:
    case  77:
    case  76:
        printf("이학생의 학점은 E입니다.");
        /* code */
        break;
    case  75:
    case  74:
    case  73:
    case  72:
    case  71:
        printf("이학생의 학점은 F입니다.");
        /* code */
        break;
    
    default:
        break;
    }
}
