void case7_call_calcuate_discount_()
{
    // 스페셜세트4개를 orders 주문에 넣어서 테스팅을 해본다.
    // struct order *os = malloc(sizeof(struct order));
    struct order orders[100];
    struct order m1, m2,m3,m4;

    m1.category = TWIGIM;
    strcpy(m1.name ,"김말이튀김");
    m1.price = 3000;
    m1.quentity = 1;
    // m1.total = m1.price * m1.quentity; //여기까지가 김밥
    orders[0] = m1;

    m2.category = DDUKBOK;
    strcpy(m2.name ,"떡볶이");
    m2.price = 3000;
    m2.quentity = 1;
    // m2.total = m2.price * m2.quentity; //여기까지가 라면
    orders[1] = m2;

    m3.category = KIMBOB;
    strcpy(m3.name ,"김밥");
    m3.price = 3000;
    m3.quentity = 1;
    // m2.total = m2.price * m2.quentity; //여기까지가 라면
    orders[2] = m3;

    m4.category = RAMEN;
    strcpy(m4.name ,"라면");
    m4.price = 3000;
    m4.quentity = 1;
    // m2.total = m2.price * m2.quentity; //여기까지가 라면
    orders[3] = m4;

    // m3.category = RAMEN;
    // strcpy(m3.name ,"라면");
    // m3.price = 3000;
    // m3.quentity = 2;
    // // m2.total = m2.price * m2.quentity; //여기까지가 라면
    // orders[2] = m3;

    // 생성한 오더배열을 calcuate_discount함수에 전달하면 어떻게 반응하는지 테스트 가능하다.
    struct order *myorder;
    myorder = &orders;
    int discount = calcuate_discount(myorder,4,2,2);
    // assert(discount==500);
    //
    printf("계산된 할인액은 ?%d\n", discount);

    
}