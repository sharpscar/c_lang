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
    printf("1.콜라(800)\n");
    printf("2.사이다(700)\n");
    printf("3.이온음료(600)\n");
    printf("4.쥬스(600)\n");
    printf("5.물(500)\n");
    printf("====================\n");
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

                // printf("%d", quantity);
                // printf("예상총금액은 %d\n", 800*quantity);
                total_ = 800 *quantity;

                // 소지금이 구매하려는 물품보다 더 많거나 같을때
                if (money >= total_)
                {
                    money = money - total_;
                    printf("콜라 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

                    getchar();

                    scanf("%c", &answer);
                    if(answer =='y')
                    {
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈은 %d원입니다 \n", money);
                        money=0;
                    }else if(answer =="n"){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                // 소지금이 구매하려는 물품보다 더 많지 않을때
                }else if(money < total_)
                {
                    printf("구매하시려는 물품을 사시기에는 돈이 %d 만큼 부족합니다.", total_-money);
                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n\n");

                    getchar();
                    
                    scanf("%c", &answer);
                    
                    // printf("answer    %c",answer);
                    //여기서 y를 눌러봐야 잔돈은 없기때문에 어차피 무쓸모긴한데 뭐. 넣었다.어쨋든 두상황 모두 돈이 없이 메뉴선택화면으로 간다.
                    if(answer=='y')
                    {   
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈%d원 입니다.\n", money);
                    }else if(answer =='n'){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                }
                
                
            }else if(n==2)
            {   
               
               
                printf("사이다를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);

                // printf("%d", quantity);
                // printf("예상총금액은 %d\n", 800*quantity);
                total_ = 700 *quantity;

                // 소지금이 구매하려는 물품보다 더 많거나 같을때
                if (money >= total_)
                {
                    money = money - total_;
                    printf("사이다 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

                    getchar();

                    scanf("%c", &answer);
                    if(answer =='y')
                    {
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈은 %d원입니다 \n", money);
                        money=0;
                    }else if(answer =="n"){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                // 소지금이 구매하려는 물품보다 더 많지 않을때
                }else if(money < total_)
                {
                    printf("구매하시려는 물품을 사시기에는 돈이 %d 만큼 부족합니다.", total_-money);
                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n\n");

                    getchar();
                    
                    scanf("%c", &answer);
                    
                    // printf("answer    %c",answer);
                    //여기서 y를 눌러봐야 잔돈은 없기때문에 어차피 무쓸모긴한데 뭐. 넣었다.어쨋든 두상황 모두 돈이 없이 메뉴선택화면으로 간다.
                    if(answer=='y')
                    {   
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈%d원 입니다.\n", money);
                    }else if(answer =='n'){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                }
                              
            }else if(n==3)
            {
                printf("이온음료를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);

                // printf("%d", quantity);
                // printf("예상총금액은 %d\n", 800*quantity);
                total_ = 600 *quantity;

                // 소지금이 구매하려는 물품보다 더 많거나 같을때
                if (money >= total_)
                {
                    money = money - total_;
                    printf("이온음료 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

                    getchar();

                    scanf("%c", &answer);
                    if(answer =='y')
                    {
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈은 %d원입니다 \n", money);
                        money=0;
                    }else if(answer =="n"){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                // 소지금이 구매하려는 물품보다 더 많지 않을때
                }else if(money < total_)
                {
                    printf("구매하시려는 물품을 사시기에는 돈이 %d 만큼 부족합니다.", total_-money);
                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n\n");

                    getchar();
                    
                    scanf("%c", &answer);
                    
                    // printf("answer    %c",answer);
                    //여기서 y를 눌러봐야 잔돈은 없기때문에 어차피 무쓸모긴한데 뭐. 넣었다.어쨋든 두상황 모두 돈이 없이 메뉴선택화면으로 간다.
                    if(answer=='y')
                    {   
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈%d원 입니다.\n", money);
                    }else if(answer =='n'){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                }
                
            }else if(n==4)
            {
                
                printf("쥬스를 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);

                // printf("%d", quantity);
                // printf("예상총금액은 %d\n", 800*quantity);
                total_ = 600 *quantity;

                // 소지금이 구매하려는 물품보다 더 많거나 같을때
                if (money >= total_)
                {
                    money = money - total_;
                    printf("쥬스 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

                    getchar();

                    scanf("%c", &answer);
                    if(answer =='y')
                    {
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈은 %d원입니다 \n", money);
                        money=0;
                    }else if(answer =="n"){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                // 소지금이 구매하려는 물품보다 더 많지 않을때
                }else if(money < total_)
                {
                    printf("구매하시려는 물품을 사시기에는 돈이 %d 만큼 부족합니다.", total_-money);
                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n\n");

                    getchar();
                    
                    scanf("%c", &answer);
                    
                    // printf("answer    %c",answer);
                    //여기서 y를 눌러봐야 잔돈은 없기때문에 어차피 무쓸모긴한데 뭐. 넣었다.어쨋든 두상황 모두 돈이 없이 메뉴선택화면으로 간다.
                    if(answer=='y')
                    {   
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈%d원 입니다.\n", money);
                    }else if(answer =='n'){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                }
                
            }else if(n==5)
            {
                
                printf("물을 선택하셨습니다.");
                printf("몇개를 사시겠습니까?");
                scanf("%d", &quantity);

                // printf("%d", quantity);
                // printf("예상총금액은 %d\n", 800*quantity);
                total_ = 500 *quantity;

                // 소지금이 구매하려는 물품보다 더 많거나 같을때
                if (money >= total_)
                {
                    money = money - total_;
                    printf("물 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

                    getchar();

                    scanf("%c", &answer);
                    if(answer =='y')
                    {
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈.%d원입니다 \n", money);
                        money=0;
                    }else if(answer =="n"){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
                    }
                // 소지금이 구매하려는 물품보다 더 많지 않을때
                }else if(money < total_)
                {
                    printf("구매하시려는 물품을 사시기에는 돈이 %d 만큼 부족합니다.", total_-money);
                    //구매종료 의사 물어본다.
                    printf("구매를 종료하시겠습니까?[잔돈반환] y/n\n");

                    getchar();
                    
                    scanf("%c", &answer);
                    
                    // printf("answer    %c",answer);
                    //여기서 y를 눌러봐야 잔돈은 없기때문에 어차피 무쓸모긴한데 뭐. 넣었다.어쨋든 두상황 모두 돈이 없이 메뉴선택화면으로 간다.
                    if(answer=='y')
                    {   
                        // 1. 잔돈여기있습니다  2. money = 0으로 초기화
                        printf("잔돈%d원 입니다.\n", money);
                    }else if(answer =='n'){
                        // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
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