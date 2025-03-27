#include <stdio.h>
#include <string.h>
#include <assert.h>
#define STR_SIZE 50

/**키보드 6.3만원
 * http://itempage3.auction.co.kr/DetailView.aspx?itemno=E851506355
 * https://sweetnew.tistory.com/235
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
}KimChoen;

typedef struct order
{
    int order_; //주문 순서까지 넣어주는 친절함!!
    int category;
    char name[100];
    int price;
}Order;

// Order orders[]={
//     {
//         {0,1, "",5000} ,
//         {0,2, "",5000} ,
//         {0,3, "",5000} ,
//         {0,4, "",5000} 

//     },
// };

int get_input_1()
{
    int answer_1;
    printf("메뉴를 몇개 주문하시겠습니까 \n");
    scanf("%d", &answer_1);
    
    return answer_1;
}


// 최초 받은 수량 만큼 요청을 받아서 넣어야 한당!
void get_input_2(KimChoen* menus, int len)
{
    // int menu_size = 48;//  sizeof(menus)/ sizeof(menus[0]);
    
    char name[STR_SIZE];
    int quentity;
    struct order customer_order;
    printf("주문할 메뉴를 입력하세요!! \n");
    printf("음식이름 :");
    scanf("%s", name);
    getchar();
    printf("몇개를 주문하시겠습니까?\n");
    scanf("%d", &quentity);
    getchar();
    int index_ = 0;
    // printf("%s 를 %d개 요청하셨습니다.\n", name, quentity);
    //받은 주문을 특정 변수에 차곡차곡 저장하는 로직이 필요!
    // printf("왜안되? %s", menus[0].name );
    for (int i=0; i<len; i++)
    {
        // 일치하는 메뉴가 있으면
        if(strcmp(name, menus[i].name)==0)
        {
            // printf("%s", menus[i].name);
            // 오더스 구조체에 값을 넣는다.
            // category카테고리! 메뉴name 몇개 quentity 를 리턴!
            /**


             */
            customer_order =set_order(
                customer_order,    
                index_,            
                menus[i].category, 
                menus[i].name,      
                menus[i].price      
            );
            index_++;
           
        }
    }
    

}

struct order set_order(
    struct order co,
    int order_, 
    int category,
     char name[],
     int price )
{
    co.order_ = order_;
    co.category = category;
    strcpy(co.name ,name);
    co.price = price;

    return co;
}



int main()
{  
   
    KimChoen menus[]=
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

    int how_many_menu;
    //사용자 입력을 받는 곳
    how_many_menu= get_input_1();

    // typedef struct order
    // {
    //     int order_; //주문 순서까지 넣어주는 친절함!!
    //     int category;
    //     char name[100];
    //     int price;
    // }Order;

 

    

    // for (int i=0; i<how_many_menu; i++)
    // {
    //     // customer_order[i] = {

    //     // }
    // }
    

    get_input_2(menus, 48);

    Order customer_order[100];
       // Order oders[]={
    //     {
    //         {0,1, "",5000} ,
    //         {0,2, "",5000} ,
    //         {0,3, "",5000} ,
    //         {0,4, "",5000} 

    //     },
    // };

    // 수량만큼 메뉴를 받고 받은 메뉴를 공간에 넣는다!

    // 공간에 넣은걸 합산한다.

    //할인을 적용한다.

    // 계산을 완료한다. 



    // 테스트 용도 아마 메뉴의 크기 만큼 뿌려보겠다. 이런 너낌!
    // int menu_size = sizeof(menus)/ sizeof(menus[0]);
    
    // for (int i=0; i<menu_size; ++i)
    // {
        
    //     // printf("%s\n", menus[i].name );
    //     if(strcmp(name, menus[i].name)==0)
    //     {
    //         printf("메뉴명 %s %d\n",menus[i].name, menus[i].price );       //menus[i].name, menus[i].price
    //     }
    // }

    

    return 0;
}
