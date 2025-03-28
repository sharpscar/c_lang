#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

enum {KIMBOB,RAMEN,DUPBOB,JJIGAE,DDUKBOK,TWIGIM,DRINKS,GUITAR};


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
struct menu
{
    int category;  //0,1,2,3,4,5,6,7,8,9 
    char name[100];    
    int price;
};



struct order
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

int get_input_3()
{
    //포장인지 매장인지 //    
}
int get_input_4()
{
    //현금인지 카드인지
}


void show_menus(struct menu *menus, int cnt)
{
 
    for(int i=0; i<cnt ; i++)
    {
        printf("메뉴 %d)%s\t\t",i+1,menus[i].name);
    }
}

// 메뉴판 , 메뉴판의 메뉴 갯수,  주문숫자
struct orders *get_input_2(struct menu *menus, int len,int cnt)
{
    char menu_name[100];
    int quentity;
  
    struct order o;
    // struct order os[100]; //메뉴를 하번에 몇개 주문할지모르니까 일단 100개
    struct order *os = malloc(sizeof(struct order));
    //메뉴들 검색하는 함수호출 - quentity만큼 반복 해당하는게 있으면 메뉴를 담자
    for(int i=0; i<cnt; i++)
    {
        
        // int menu_size = 48;//  sizeof(menus)/ sizeof(menus[0]);
        printf("메뉴명은 어떻게 되십니까? \n");
        scanf("%s", menu_name);
        printf("수량은 몇개를 주문하시겠습니까? \n");
        scanf("%d", &quentity);
        //메뉴명은 문자열이라 포인터인 매개변수로 넘김
        // len = 48개의 메뉴에서 찾는다.
        for(int j=0; j<len; j++)
        {
            if(strcmp(menu_name, menus[j].name)==0)
            {
                o.category = menus[j].category;
                strcpy(o.name, menus[j].name);
                o.price = menus[j].price;
                os[i]= o;        
            }
        }        
    }
    return os;
}


int calcuate_discount(struct order *order_ptr,int how_many_menu)
{
   
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
    // myorder = &orders;
    // int discount = calcuate_discount(myorder,2);
    // assert(500==discount);
    // printf("계산된 할인액은 ?%d", discount);

}


int main()
{

    struct menu menus[]=
    {
        {KIMBOB,"김밥",3000},
        {KIMBOB,"치즈김밥",3500},
        {KIMBOB,"참치김밥",3500},
        {KIMBOB,"김치김밥",3500},
        {KIMBOB,"야채김밥",3000},
        {KIMBOB,"소고기김밥",4000},
        {KIMBOB,"돈까스김밥",4000},
        {KIMBOB,"삼겹살김밥",4500},

        {RAMEN,"라면",3000},
        {RAMEN,"계란라면",3500},
        {RAMEN,"치즈라면",3500},
        {RAMEN,"만두라면",3500},
        {RAMEN,"짬뽕라면",4000},
        {RAMEN,"떡라면",3500},
        {RAMEN,"떡만두라면",4000},

        {DUPBOB,"제육덮밥",7000},
        {DUPBOB,"오징어덮밥",7500},
        {DUPBOB,"오징어제육덮밥",8000},
        {DUPBOB,"돈까스덮밥",8000},
        {DUPBOB,"쇠고기덮밥",8000},
        {DUPBOB,"김치덮밥",7000},
        {DUPBOB,"김치제육덮밥",7500},
        {DUPBOB,"소시지덮밥",7500},
        {DUPBOB,"오므라이스",7500},
        
        {JJIGAE,"김치찌개",7000},
        {JJIGAE,"된장찌개",7000},
        {JJIGAE,"참치김치찌개",7500},
        {JJIGAE,"고기듬뿍 김치찌개",8000},
        {JJIGAE,"차돌된장찌개",8000},
        {JJIGAE,"부대찌개",8000},
        {JJIGAE,"동태찌개",8000},
        {JJIGAE,"순두부찌개",8000},
        
        {DDUKBOK,"떡볶이",5000},
        {DDUKBOK,"치즈떡볶이",6000},
        {DDUKBOK,"해물떡볶이",7000},
        {DDUKBOK,"짜장떡볶이",7000},
        {DDUKBOK,"라볶이",6000},
        {DDUKBOK,"치즈라볶이",7000},

        {TWIGIM,"김말이튀김",4000},
        {TWIGIM,"야채튀김",4000},
        {TWIGIM,"만두튀김",4000},
        {TWIGIM,"고추튀김",5000},
        {TWIGIM,"오징어튀김",5000},

        {GUITAR,"공기밥",1000},

        {DRINKS,"콜라",1000},
        {DRINKS,"사이다",1000},
        {DRINKS,"오렌지환타",1000},
        {DRINKS,"파인애플환타",1000},
        
    };

    // 구조체 포인터를 이용해 메뉴를 출력한다.
    show_menus(menus, 48);
  
    printf("\n");
    printf("\n");

    int how_many_menu;
    //사용자 입력을 받는 곳
    how_many_menu= get_input_1();
    //여기에 포장? 매장? 질문하여 변수에 넣자
    
    
    
    
    
    int discount;
     // 구조체로 만든 메뉴정보들을 포인터 변수로 만듬
    struct menu *menu_ptr;  
    struct order *kimbab_order;
    menu_ptr = &menus;

    
    
    kimbab_order = get_input_2(menu_ptr, 48, how_many_menu);
    
    printf("주문정보1 %s\n",kimbab_order[0].name);
    printf("주문정보1 %s\n",kimbab_order[1].name);

    //  // 메뉴정보를 넘겨서 사용자 입력을 받으면 그걸 메뉴와 유사한 주문 배열에 하나씩 받아옴
  

    // 받은 주문이 제대로 오더 객체에 담겨있는지 확인
    // printf("2-1.주문받은게 맞는지 확인 %s\n",myorder[0].name);
    // printf("2-1.주문받은게 맞는지 확인 %d\n",myorder[0].quentity);


    // printf("2-2.주문받은게 맞는지 확인 %s\n",myorder[0].name);
    // printf("2-2.주문받은게 맞는지 확인 %d\n",myorder[0].quentity);

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
   
    
    
   


  
