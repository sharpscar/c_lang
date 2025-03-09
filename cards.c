#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    puts("Enter the card_name:");
    scanf("%2s", card_name);

    int val = 0;
    if(card_name[0] =='K'){
        val=10;
    }else if (card_name[0] == 'Q'){
        val=10;
    }else if (card_name[0] == 'J'){
        val=10;
    }else if (card_name[0] == 'A'){
        val=11;
    }else{
        val = atoi(card_name); //converts the text into a number
    }

    if ((val>2)&&(val<7))
        puts("Count has gone Up");
    else if(val==10){
        puts("Count has gone down");
    }

    printf("The card value is %i\n", val);
    return 0;
    
}


/*
이것은 주석이다. 근데 왜 이탤릭? 옆으로 누웠니?

printf()함수는 문자열 포매팅

만약 ide를 쓰지 못하는 상태에서는 

터미널에서 아래의 명령어를 입력하면 컴파일된다.
gcc cards.c -o cards 


evaluate 평가하다.
determine 결정하다.
routine 일상 , 틀에박힌일

*/

