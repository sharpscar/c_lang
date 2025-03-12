#include <stdio.h>
#include <stdbool.h>

void ex_01();
// void ex_02();
// void ex_03();
// void ex_04();
// void ex_05();
void ex_06();
void ex_07();
void ex_08();
// void ex_09();
void ex_10();
// void ex_11();
// void ex_12();
// void ex_13();
// void ex_14();
// void ex_15();
// void ex_16();
// void ex_17();
// void ex_18();

void star_01();

int main()
{
    // ex_01();
    // ex_02();
    // ex_08();
    // ex_10();
    // star_01();
    // star_02();
    // star_03();
    star_04();

    return 0;
}

void star_04()
{

    int num1;
    printf("정수를 하나 입력해줘요");
    scanf("%d", &num1);
    int i;
    int j;   
    int k; 
    printf("받은 정수는 %d\n", num1);
    int plus1;
    plus1 = num1+1;
    for (i=0; i < num1; i++)
    {
        // printf("i값의 변화를 본다. %d\n", i);
        for (j=0; j<i; j++)
        {
            // printf("j값의 변화를 본다 %d\n",j);
            printf(" ");
        }
        for (k=num1; k>i; k-- )
        {
            // printf("k값은 %d",k);
            printf("*");
        }

        printf("\n");
    }
    /**
     *   i 5 5 5 5 5 5 4 4 4 4 4 3 3 3 3 2 2 2 1 1
     *   j 5 4 3 2 1 0 4 3 2 1 0 3 2 1 0 2 1 0 1 0
     */

    // }    
     
}


void star_01()
{
    int num1;
    printf("정수를 하나 입력해줘요");
    scanf("%d", &num1);
    int i;
    int j;    
    printf("받은 정수는 %d\n", num1);
    
    for (i=0; i < num1; i++)
    {
        // printf("i값의 변화를 본다. %d\n", i);
        for (j=0; j<i; j++)
        {
            // printf("j값의 변화를 본다 %d\n",j);
            printf("*");
        }
        printf("\n");
    }
    /**
     *   i 5 5 5 5 5 5 4 4 4 4 4 3 3 3 3 2 2 2 1 1
     *   j 5 4 3 2 1 0 4 3 2 1 0 3 2 1 0 2 1 0 1 0
     */

    // }    
     
}

void star_02()
{
    int num1;
    printf("정수를 하나 입력해줘요");
    scanf("%d", &num1);
    int i;
    int j;    
    // printf("받은 정수는 %d\n", num1);
    for (i=num1; 0 < i; i--)//5 4 3 2 1
    {
        // printf("i값의 변화를 본다. %d\n", i);
        for (j=i; 0<=j-1; j--)   
        {
            // printf("j값의 변화를 본다 %d\n",j);
            printf("*");
        }
        printf("\n");
    }
}

void star_03()
{
    /**
     * 2번의 공백을 넣고 별을 찍으면 3번이 됩니다.
     */
    int num1;
    printf("정수를 하나 입력해줘요");
    scanf("%d", &num1);
    int i;
    int j;   
    int k; 
    int plus1;
    plus1 = num1 +1; //6  - i5 4 3 2 1    
    // printf("받은 정수는 %d\n", num1);
    for (i=num1; 0 < i; i--)//5 4 3 2 1
    {
        // printf("i값의 변화를 본다. %d\n", i);
        for (j=i; 0<=j-1; j--)   
        {
            // printf("\tj값은 %d\t",j);
            printf(" ");    

        }
        // 1씩 증가하는 별을 찍자 1 2 3 4 5 ; num1  
        //k<plus +1 -i
        // k = 6 - 4 
        /**
         * k초기값을  for(k=plus1-i ;k<plus1+1-i; k++) 
         * 이렇게 하면 공백 뒤에 별이 한개씩만 찍힌다. 
         * 몹시 고통스러웠다. 
         * 정답은 for(k=0;k<plus1-i; k++)
         * 대업님의 도움으로 해결 
         * 이중반복문 작성시엔 i 반복문과 그 다음반복문과의 
         * 범위 관계를 면밀히 봐야 한다는 내용이 있었다. 
         */
        for(k=0;k<plus1-i; k++)
        {
            //  printf("\tk값은 %d\t",k );
             printf("*");
            //  printf("\t plus1의값은 %d" , plus1);
             
        }
        printf("\n");
       
    }
}




void ex_01()
{
    char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int alpha_size = sizeof(alpha);
    // printf("%d\n", sizeof(numArr)/sizeof(int));
    for (int i=0; i<alpha_size; i++)
    {
        printf("%c\n", alpha[i]);
    }

}

void ex_02()
{
    char dollar = '$';
    char *str_ = "";
    int cnt = 5;
   

}
void ex_10()
{
    int num1;
    int num2;
    int sum_;
    int iter_size;
    do
    {

        printf("정수 두개를 입력해 주시요 시작~끝으로 앞자리가 더 작아야 합니다");
        scanf("%d %d", &num1, &num2);
        iter_size = num2-num1+1;
        sum_ = 0;
        //반복을 돌려서 합을 구한다.
        for (int i=num1; i<num1+iter_size; i++)
        {
            sum_+= (i*i) ;
        }
        printf("%d 부터 %d까지의 합은 %d\n", num1*num1, num2*num2, sum_);
        // printf("iter_size 의 값은 %d", iter_size);

        /* code */
    } while (iter_size-1 > 1 );

}

void ex_06()
{
    int num1;
    int num2;
    //사용자에게서 num1 num2 두개를 받는다.
    printf("정수 두개를 입력해 주시요 시작~끝으로 앞자리가 더 작아야 합니다");
    scanf("%d %d", &num1, &num2);
    // printf("%d\n", sizeof(numArr)/sizeof(int));    
    // num1~num2까지 반복 돌린다. 반복 크기를 구하는 변수! 왜 +2 해야할까 시작값은 1이라고 해서 +1 인건 알겠는데
    // 아하 마지막 값까지 하고싶으면 <= 이렇게 하면 +1 이다.
    int iter_size = num2 -num1+1;  
    
    for (int i=num1; i<num1+iter_size;i++ )
    {
        printf("정수는 : %d\n", i);
        printf("정수의 제곱은 : %d\n", i*i);
        printf("정수의 3제곱은: %d\n", i*i*i);
    }
    //출력부분을 완성한다. 
}

void ex_08()
{
    /**
     * 1. 사용자에게 두개의 부동소수점 수를 요청하여 , 그들의 차를 구한다.
     * 2. 그드르이 곱으로
     * 그들의 곱으로 나눈 결과를 출력하는 프로그램
     */
    float a;
    float b;
    float sub_;
    float mul_;
    float div_;
    bool input_is_good;

    printf("부동소수점 하나 입력하세요.");
    printf("끝내려면 q): ");
    
    // scanf("%f",&b);
    // printf("a= %f  b=%f",a,b);

    input_is_good = (scanf("%f",&a) == 1);
    // printf("a에 입력된값 %f",a);
    // printf("intput_is_good 변수의 값은 %d", input_is_good);

    while(input_is_good)
    {
        printf("다음 정수를 입력하시오 (끝내려면 q): ");
        input_is_good = (scanf("%f", &b)==1);
        
        // 차이를 구한다.
        sub_ = a-b;
        mul_ = a*b;
        div_ = a/b;
    }
    printf("입력된 정수들 %.2f  %.2f\n", a,b);
    printf("입력된 정수들의 차이는 %.2f입니다. \n", sub_);
    printf("입력된 정수들의 곱은 %.2f입니다. \n", mul_);
    printf("입력된 정수들의 나눈값은 %.2f입니다. \n", div_);
    
}

void ex_07()
{
    //도전 실패!
    //단어 하나를 읽어 문자 배열에 저장한다.
    // char word_[20];
    // char c_arr[10][20];
    // int cnt;
    // bool status;
    
    
    // cnt =0;
    
    // // 1. 입력을 받는다
    // printf("단어를 입력하세요");
    // scanf("%s\n",word_);


    // // 2. 받은걸 넣는다.
    // //  크기 = (int)strlen(word_) <-- 단어의 길이 관련 제한 하거나 배열이 1차원 배열일땐 크기를 지정해서 넣거나 해야겠지?
    // c_arr[0][0] = word_;
    // printf("%s\n", c_arr[0][0]);

    // 3. 반복한다.
    // for (int i=0; i<10; i++)
    // {
    //     c_arr[i] = word_;
    // }


    // 4. 출력은 거꾸로한다.    

}