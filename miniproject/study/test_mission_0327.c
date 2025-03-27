#include <stdio.h>
#include <string.h>
#include <assert.h>
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

// Order orders[]={
//     {
//         {1, "",5000} ,
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
void show_menus(struct menu *menus, int cnt)
{
 
    for(int i=0; i<cnt ; i++)
    {
        printf("메뉴 %d)%s\t\t",i+1,menus[i].name);
    }
}

// 최초 받은 수량 만큼 요청을 받아서 넣어야 한당!
struct order get_input_2(struct menu *menus, int len)
{
    // int menu_size = 48;//  sizeof(menus)/ sizeof(menus[0]);
    
    char name[STR_SIZE];
    int quentity;
    struct order m;
    printf("주문할 메뉴를 입력하세요!! \n");
    printf("메뉴명 :");
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
            // myorder = (&(struct order){.category=menus[i].category, .name=menus[i].name, .price =menus[i].price, .quentity=quentity});                                
            return m;
           
        }
        // else{
        //     printf("일치하는 메뉴가 없어요");
        // }
        
    }
    return m;
}
// ORDER set_order(struct order co, int category,char name[],int price )
// {     
//     co.category = category;
//     strcpy(co.name ,name);
//     co.price = price;
    
// }



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

    struct order myorder[50];
    struct menu *ptr;
    ptr = &menus;
    int total;
    for (int i=0 ; i< how_many_menu; i++)
    {
        myorder[i]= get_input_2(ptr, 48);
        printf("메인함수로 받아온 order 의 값%s",myorder[i].name);
        total += myorder[i].total;
    }

    //총합은 구했다.
    printf("%d", total);

    
    
}
