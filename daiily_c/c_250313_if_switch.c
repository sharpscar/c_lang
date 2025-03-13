#include <stdio.h>

int show_menus();
int user_select();


int main()
{   
    int cond,n,money,quantity,total_;
    cond = 1;
    money = 0;
    char answer;

    do{
     //메뉴 
    printf("콜라(800)");
    printf("사이다(700)");
    printf("이온음료(600)");
    printf("쥬스(600)");
    printf("물(500)\n");
    printf("현재금액 :%d ",money);
    printf("입력  (1~9 메뉴입력, 화폐단위 입력 :금액투입)");


    scanf("%d", &n);
        
        // 메뉴
        if(n<10){
            if(n==1)
            {
                printf("콜라를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);
                
                if(money < 800)
                {
                    printf("금액이 부족합니다.");

                }else{
                    //scanf 
                    // 총 비용을 계신   total_fee = 800 * quantity
                    total_ = 800* quantity;
                    //주문 실행!
                    printf("콜라를 드립니다.");
                    money= money-800;
                    printf("음료를 추가 구매하시겠습니까? y/n");
                    scanf("%c",answer);
                    // 여기서 y이면 메뉴화면으로 점프 n이면 잔돈 여부를 묻는다. 
                    printf("%c", answer);
                    if(answer =="y"){
                        //go to menu 
                    }else{
                        //go to get_change<-- 머니의 남은돈을 전부 돌려주고 money = 0으로 초기화
                    }
                }
            }else if(n==2)
            {   
                printf("사이다를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);
                
                if(money < 700)
                {
                    printf("금액이 부족합니다.");

                }else{
                    //scanf 
                    // 총 비용을 계신   total_fee = 800 * quantity
                    total_ = 700* quantity;
                    //주문 실행!
                    printf("사이다를 드립니다.");
                    money= money-800;
                    printf("음료를 추가 구매하시겠습니까? y/n");
                    scanf("%c",answer);
                    // 여기서 y이면 메뉴화면으로 점프 n이면 잔돈 여부를 묻는다. 
                    printf("%c", answer);
                    if(answer =="y"){
                        //go to menu 
                    }else{
                        //go to get_change<-- 머니의 남은돈을 전부 돌려주고 money = 0으로 초기화
                    }
                }                
            }else if(n==3)
            {
                printf("이온음료를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);
                
                if(money < 600)
                {
                    printf("금액이 부족합니다.");

                }else{
                    //scanf 
                    // 총 비용을 계신   total_fee = 800 * quantity
                    total_ = 600* quantity;
                    //주문 실행!
                    printf("사이다를 드립니다.");
                    money= money-600;
                    printf("음료를 추가 구매하시겠습니까? y/n");
                    scanf("%c",answer);
                    // 여기서 y이면 메뉴화면으로 점프 n이면 잔돈 여부를 묻는다. 
                    printf("%c", answer);
                    if(answer =="y"){
                        //go to menu 
                    }else{
                        //go to get_change<-- 머니의 남은돈을 전부 돌려주고 money = 0으로 초기화
                    }
                }
            }else if(n==4)
            {
                printf("쥬스를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);
                
                if(money < 600)
                {
                    printf("금액이 부족합니다.");

                }else{
                    //scanf 
                    // 총 비용을 계신   total_fee = 800 * quantity
                    total_ = 600* quantity;
                    //주문 실행!
                    printf("사이다를 드립니다.");
                    money= money-600;
                    printf("음료를 추가 구매하시겠습니까? y/n");
                    scanf("%c",answer);
                    // 여기서 y이면 메뉴화면으로 점프 n이면 잔돈 여부를 묻는다. 
                    printf("%c", answer);
                    if(answer =="y"){
                        //go to menu 
                    }else{
                        //go to get_change<-- 머니의 남은돈을 전부 돌려주고 money = 0으로 초기화
                    }
                }
            }else if(n==5)
            {
                printf("물을 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);
                
                if(money < 500)
                {
                    printf("금액이 부족합니다.");

                }else{
                    //scanf 
                    // 총 비용을 계신   total_fee = 800 * quantity
                    total_ = 600* quantity;
                    //주문 실행!
                    printf("사이다를 드립니다.");
                    money= money-600;
                    printf("음료를 추가 구매하시겠습니까? y/n");
                    scanf("%c",answer);
                    // 여기서 y이면 메뉴화면으로 점프 n이면 잔돈 여부를 묻는다. 
                    printf("%c", answer);
                    if(answer =="y"){
                        //go to menu 
                    }else{
                        //go to get_change<-- 머니의 남은돈을 전부 돌려주고 money = 0으로 초기화
                    }
                }
            }
            
        }
        // 금액
        else {
            switch (n)
            {
            case 10:
                /* code */
                money +=10;
                break;            
            case 50:
                /* code */
                money +=50;
                break;
            case 100:
                /* code */
                money +=100;
                break;
            case 500:
                /* code */
                money +=500;
                break;
            case 1000:
                /* code */
                money +=1000;
                break;
            case 5000:
                /* code */
                money +=5000;
                break;
            case 10000:
                /* code */
                money +=10000;
                break;
            case 50000:
                /* code */
                money +=50000;
                break;
            
            default:
                printf("잘못된 금액이나 메뉴를 입력");
                break;
            }
        }

    }
    while(cond);

    return 0;
}