#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>



#define STR_SIZE 50

/**키보드 6.3만원
 * http://itempage3.auction.co.kr/DetailView.aspx?itemno=E851506355
 * https://sweetnew.tistory.com/235
 * 
 * https://dojang.io/mod/page/view.php?id=571
 * 
 */


 int get_input_1();
/**
 * 김밥 0, 라면1, 덮밥2, 찌개3, 떡볶이 4, 튀김 5, 기타 6, 음료 7
 * 
 */
typedef struct menu
{
    int category;  //0,1,2,3,4,5,6,7,8,9 
    char name[100];    
    int price;
};

typedef struct order
{
    // int order_; //주문 순서까지 넣어주는 친절함!!
    int category;
    char name[100];
    int price;
    int quentity;
    int total;
};


int get_input_1()
{
    int answer_1;
    printf("메뉴명 기준 몇개 주문하시겠습니까 \n");
    scanf("%d", &answer_1);
    
    return answer_1;
}
void show_menus(struct menu *menus, int cnt)
{
 
    for(int i=0; i<cnt ; i++)
    {
        printf("메뉴 %d)%s\t\t",i+1,menus[i].name);
    }
}


 // printf("주문할 메뉴를 입력하세요!! \n");
    // printf("메뉴명 :\n");
    // scanf("%s", name);
    // getchar();
    // printf("몇개를 주문하시겠습니까?\n");
    // scanf("%d", &quentity);
    // getchar();   
    // if(strcmp(name, menus[i].name)==0)

// 최초 받은 수량 만큼 요청을 받아서 넣어야 한당!
struct order get_input_2(struct menu *menus, int len)
{
   
    int answer_1;
    
    printf("메뉴명 기준 몇개 주문하시겠습니까 \n");
    scanf("%d", &answer_1);

    

    // int menu_size = 48;//  sizeof(menus)/ sizeof(menus[0]);

    char name[STR_SIZE];
    int quentity;
    struct order m;
    printf("주문할 메뉴를 입력하세요!! \n");
    printf("메뉴명 :");
    printf("메뉴명 :\n");
    scanf("%s", name);
    getchar();
    printf("몇개를 주문하시겠습니까?\n");
    scanf("%d", &quentity);
    getchar();   

    for (int i=0; i<len; i++)
    {        
        // 일치하는 메뉴가 있으면        
        if(strcmp(name, menus[i].name)==0)
        {        
            m.category = menus[i].category;
            strcpy(m.name ,menus[i].name);
            m.price = menus[i].price;
            m.quentity = quentity;
            m.total = m.price * m.quentity;
            // set_order(myorder, menus[i].category,menus[i].name, menus[i].price);
            // 구조체 데이터 넣는 아래의 방식도 동작하는거같다.
            // myorder = (&(struct order){.category=menus[i].category, .name=menus[i].name, .price =menus[i].price, .quentity=quentity});                                
            return m;

        }
        // else{
        //     printf("일치하는 메뉴가 없어요");
        // }
        else{
            printf("[system]일치하는 메뉴가 없어요 입력하신 메뉴 ->%s", name);
        }

    }
    return m;
}

int calcuate_discount(struct order *order_ptr,int how_many_menu)
{
   
    int total_cost, discount;
    bool case1,case2,case3,case4,case5, case_kimra, case_dduktwi;


    for (int i=0; i< how_many_menu; i++)
    {
        case1 = (order_ptr[i].category == 1) && (order_ptr[i].quentity >= 1);
        case2 = (order_ptr[i].category == 0) && (order_ptr[i].quentity >= 1);
        case3 = (order_ptr[i].category == 4) && (order_ptr[i].quentity >= 1);
        case4 = (order_ptr[i].category == 5) && (order_ptr[i].quentity >= 1);
        //스페셜 조건 김라떡튀가 무조건 1개 이상 있는경우 2000원 할인
        case5 = (order_ptr[i].category == 0) && (order_ptr[i].quentity >= 1) &&
                (order_ptr[i].category == 1) && (order_ptr[i].quentity >= 1) &&
                (order_ptr[i].category == 4) && (order_ptr[i].quentity >= 1) &&
                (order_ptr[i].category == 5) && (order_ptr[i].quentity >= 1);
        
        total_cost += order_ptr[i].total;
        
        if(case5)
        {   
            discount = discount +2000;
            //출력문 [스페셜 할인 2000원!]
        }
        else if( case1 && case2)
        {
            // case_kimra++;  // 이게 하나당 500씩 할인 
            discount = discount +500;
            //출력문 [할인 500원 추가]
        }else if (case3 && case4)
        {
            discount = discount +500;
            // 출력문 [할인 500원 추가]

        }
    }

        printf ("총액은 %d 입니다.\n", total_cost);
        printf ("할인액은 %d 입니다.\n", discount);

        
        printf ("지불하실 금액은 %d 입니다.\n", total_cost - discount);

    return discount;
}

/*
할인정보 계산 함수를 테스트하는 코드
order배열과 주문메뉴갯수를 매개변수로 넣으면 할인계산하여 할인액을 리턴하는 함수
만약 함수가 잘 동작하면 함수에는 문제가 없는것
*/
void case1_call_calcuate_discount_()
{
    // 김밥 2개 라면1개를 orders 주문에 넣어서 테스팅을 해본다.
    struct order orders[2];
    struct order m1, m2;

    m1.category = 0;
    strcpy(m1.name ,"김밥");
    m1.price = 3000;
    m1.quentity = 2;
    m1.total = m1.price * m1.quentity; //여기까지가 김밥

    m2.category = 1;
    strcpy(m2.name ,"라면");
    m2.price = 3000;
    m2.quentity = 1;
    m2.total = m2.price * m2.quentity; //여기까지가 라면
    orders[1] = m2;

    // 생성한 오더배열을 calcuate_discount함수에 전달하면 어떻게 반응하는지 테스트 가능하다.
    struct order *myorder;
    myorder = &orders;
    int discount = calcuate_discount(myorder,2);
    assert(500==discount);
    printf("계산된 할인액은 ?%d", discount);

}


int main()
{
    struct menu menus[]=
    {
        {0,"김밥",3000},
        {0,"치즈김밥",3500},
        {0,"참치김밥",3500},
        {0,"김치김밥",3500},
        {0,"야채김밥",3000},
        {0,"소고기김밥",4000},
        {0,"돈까스김밥",4000},
        {0,"삼겹살김밥",4500},

        {1,"라면",3000},
        {1,"계란라면",3500},
        {1,"치즈라면",3500},
        {1,"만두라면",3500},
        {1,"짬뽕라면",4000},
        {1,"떡라면",3500},
        {1,"떡만두라면",4000},

        {2,"제육덮밥",7000},
        {2,"오징어덮밥",7500},
        {2,"오징어제육덮밥",8000},
        {2,"돈까스덮밥",8000},
        {2,"쇠고기덮밥",8000},
        {2,"김치덮밥",7000},
        {2,"김치제육덮밥",7500},
        {2,"소시지덮밥",7500},
        {2,"오므라이스",7500},
        
        {3,"김치찌개",7000},
        {3,"된장찌개",7000},
        {3,"참치김치찌개",7500},
        {3,"고기듬뿍 김치찌개",8000},
        {3,"차돌된장찌개",8000},
        {3,"부대찌개",8000},
        {3,"동태찌개",8000},
        {3,"순두부찌개",8000},
        

        {4,"떡볶이",5000},
        {4,"치즈떡볶이",6000},
        {4,"해물떡볶이",7000},
        {4,"짜장떡볶이",7000},
        {4,"라볶이",6000},
        {4,"치즈라볶이",7000},

        {5,"김말이튀김",4000},
        {5,"야채튀김",4000},
        {5,"만두튀김",4000},
        {5,"고추튀김",5000},
        {5,"오징어튀김",5000},

        {6,"공기밥",1000},


        {7,"콜라",1000},
        {7,"사이다",1000},
        {7,"오렌지환타",1000},
        {7,"파인애플환타",1000},
        
    };

    // 구조체 포인터를 이용해 메뉴를 출력한다.
    show_menus(menus, 48);

    int how_many_menu;
    //사용자 입력을 받는 곳
    how_many_menu= get_input_1();
    //여기에 포장? 매장? 질문하여 변수에 넣자

    struct order myorder[1000];
    int discount;
     // 구조체로 만든 메뉴정보들을 포인터 변수로 만듬
     struct menu *menu_ptr;
      ;

     // 메뉴정보를 넘겨서 사용자 입력을 받으면 그걸 메뉴와 유사한 주문 배열에 하나씩 받아옴
    for (int i=0 ; i< how_many_menu; i++)
    {
        myorder[i]= get_input_2(&menus, 48);
    }
    struct order *order_ptr;
    // order_ptr = &myorder;
    //위에서 생성된 myorder객체를 할인율 계산 함수에 전달
    // discount =  calcuate_discount(order_ptr,how_many_menu);
    case1_call_calcuate_discount_();
// 할인율 계산 함수는 discount 금액을 리턴

    // 작성된 함수들의 기능 테스트를 assert() 구문으로 내가 예상한 금액과 비교 테스팅!

    /**
     *  1 orders의 메뉴 갯수가  5이상이면 음료수 1개 무료
        2 orders의 메뉴의 갯수가 10이상이면 디스카운트 10%
        3 카드 계산시 +10% 오버차지
        4 포장은 포장비 2천원 , 메뉴가 5개 이상이면 무료

        5 할인내역 -로 표현
        6 정산하기  기능은 모든 주문들을 기록하는 내역이다. 
        각행의 기능들을 동작하도록 함수화 하여 완성하는게 금요일 목표입니다.
     */
    
    // 할인을 계산하는 부분
    
        
    

    //총합은 구했다. 카테고리 {0,1} {4,5} {0,1,4,5}

    /** 
     * 카테고리가 0인, 카테고리가 1인 녀석들이 1개라도 있으면 
     * 
     */
}
   
    
    
   


  
