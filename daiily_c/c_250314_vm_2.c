#include <stdio.h>

int main_screen(int money);
int set_order(int n, int cost, int money);
int main()
{
    int money,n,cost;
    money = 0;
    
    while(1)
    {
        
        main_screen(money);

        scanf("%d", &n);

        // printf("돈은 %d\n", money);
        
        // printf("n은 %d\n",n);
        
         //화폐인경우 switch
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
       }
       //판단 화폐인지 메뉴선택인지 판단하는 
       //메뉴인경우  1~10
       //콜라의경우 
       if(n<10)
       {
            //콜라와 갯수를 설정하는 함수 돈없이 구매불가;
            if(n ==1)
            {
                money = set_order(1, 800, money);  
            }
            else if(n==2)
            {
                money = set_order(2, 700, money);  
            }else if(n==3)
            {
                money = set_order(3, 600, money);  

            }else if(n==4)
            {
                money = set_order(4, 600, money);                  
            }else if(n==5)
            {
                money = set_order(5, 500, money);  
            }

       }     
       
    }
    return 0;
}

// 오더 정보를 세팅하는데 현재단계에는 나중에 빼내자 오더 기능이 들어가 있다.

int set_order(int n, int cost, int money)
{

    int quantity, total_;
    char answer;
    char drink_name[][15] = {"콜라","사이다","이온음료","쥬스","물"};
    // printf("n은 뭘로 선택되었을까?뭘로 선택되었을까?뭘로 선택되었을까?%d",n);
    if (n==1)
    {  
        printf("%s를 선택하셨습니다.",drink_name[0]);
        printf("몇개를 사시겠습니까?");
        
    }else if(n==2)
    {       
        printf("%s를 선택하셨습니다.",drink_name[1]);
        printf("몇개를 사시겠습니까?");
    }else if(n==3)
    {        
        printf("%s를 선택하셨습니다.",drink_name[2]);
        printf("몇개를 사시겠습니까?");
    }else if(n==4)
    {        
        printf("%s를 선택하셨습니다.",drink_name[3]);
        printf("몇개를 사시겠습니까?");
    }else if(n==5)
    {
        printf("%s를 선택하셨습니다.",drink_name[4]);
        printf("몇개를 사시겠습니까?");
    }    
    scanf("%d", &quantity);

    // printf("%d", quantity);
    // printf("예상총금액은 %d\n", 800*quantity);
    total_ = cost *quantity;

    // 소지금이 구매하려는 물품보다 더 많거나 같을때
    if (money >= total_)
    {
        money = money - total_;
        printf("음료를 %d개 구매 하셨습니다. 잔액은 %d입니다.\n ", quantity, money);

        //구매종료 의사 물어본다.
        printf("구매를 종료하시겠습니까?[잔돈반환] y/n)  :");

        getchar();

        scanf("%c", &answer);
        
        if(answer =='y')
        {
            // 1. 잔돈여기있습니다  2. money = 0으로 초기화
            printf("잔돈은 %d원입니다 \n", money);
            money=0;
            main_screen(money);

        }else if(answer =='n'){
            // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
            main_screen(money);
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
            main_screen(0);
        }else if(answer =='n'){
            // 1. 잔돈은 그대로 시스템이 갖고있는다 2. 메뉴로 간다.
            main_screen(money);
        }
    }
              
}

int main_screen(int money){

    

    printf("1.콜라(800)\n");
    printf("2.사이다(700)\n");
    printf("3.이온음료(600)\n");
    printf("4.쥬스(600)\n");
    printf("5.물(500)\n");
    printf("====================\n");
    printf("현재금액 :%d\n",money);
    printf("입력  (1~9 메뉴입력, 화폐단위 입력 :금액투입)");
    return money;
}
