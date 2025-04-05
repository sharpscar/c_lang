#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "struct_member.h"
#define MAX_MEMBERS 100

char new_id [40];
char new_password[20];
char new_name[20];
int new_age;
char new_phone_num[40];

int articles_cnt;
int members_cnt;
int account_cnt;

member new_mem[MAX_MEMBERS]; 
article articles[300]; 

void print_main_menu();

void check_password();  // 비밀번호 확인 함수

void save_phonenum();
//회원가입(조건 맞을 때 csv파일 추가)
void sign_up();

// 회원csv 파일 -> 구조체 new_mem 파일에 담는 함수
void csv_to_struct_mem();

// 회원정보 조회하는 함수
void search_mem();

//글작성을 위해 글제목, 글내용 입력 받는 함수
article get_input();

// 글목록을 출력하는 함수
void show_article_list();

//글 작성하는 함수
void write_a_article();

//삭제를 하기위해 구조체 배열 변수에 파일의 내용들을 담는 함수
void store_to_article_struct(); 

//목록에서 삭제하는 함수
void delete_a_article_from_articles();



int main(){
    // save_phonenum();
    // printf("진짜 저장된 번호~: %s",new_phone_num);
    csv_to_struct_mem();
    printf("테스트으!%s", new_mem[0].password);
}

void print_main_menu(){
    int main_menu_choice;
    puts(" ~ 신난다 ~ 재미나다 ! ~ 우리들의 버디버디 ~ ");
    puts("---------------- LOG IN -------------------");
    puts("1:\t\t로그인");
    puts("2:\t\t회원가입");
    printf(" >>> ");
    scanf("%d",&main_menu_choice);
}

void save_phonenum() {
    char phonenum[40];
    char clean_phonenum[40];
    int j = 0;  //clean_phonenum에 접근하기위한 인덱스

    puts("전화번호 입력: ");
    scanf("%s", phonenum);  // 전화번호 입력 받기

    // 원래 문자열 돌면서 '-'가 아니면 클린넘버에 넣기
    for (int i = 0; i < strlen(phonenum); i++) {
        if (phonenum[i] != '-') {
            clean_phonenum[j++] = phonenum[i];
        }
    }
    clean_phonenum[j] = '\0';  // 문자열 종료 문자 추가

    printf("저장되는 전화번호: %s\n", clean_phonenum);//확인용
    memcpy(new_phone_num,clean_phonenum,strlen(clean_phonenum)+1);
}

void sign_up()
{

    //입력했을때 csv 에 맞는 값이라고 했을때 넣는
    FILE *fp = fopen("account.csv", "a");  // 파일이 없으면 생성, 있으면 이어쓰기 모드 a+이랑은 뭐가 다르지?
    if (fp == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        exit(1);
    }
    
    // 사용자로부터 입력 받기 (조건을 추가해야겠지요)
    printf("아이디: ");
    scanf("%s", new_id);
    printf("비밀번호: ");
    scanf("%s", new_password);
    printf("이름: ");
    scanf("%s", new_name);
    printf("나이: ");
    scanf("%d", &new_age);
    printf("전화번호: ");
    scanf("%s", new_phone_num);
    
    // CSV 형식으로 파일에 저장!
    fprintf(fp, "%s,%s,%s,%d,%s\n", new_id, new_password, new_name, new_age, new_phone_num);
    fclose(fp);
    csv_to_struct_mem(new_mem);
    search_mem(new_mem);
}

void csv_to_struct_mem() { 
    FILE *file = fopen("account.csv","r");
    char line[255];
    int count = 0;

    while(fgets(line, sizeof(line),file) != NULL && count < MAX_MEMBERS){
        // line[strcpn(line,"\n")] = 0;  //줄바꿈 문자 0으로 바꿔줌
        char *token = strtok(line,"|");  //,기준으로 나누어 가져오겟다

        if(token == NULL) continue;
            strcpy(new_mem[count].id, token);
            // printf("읭1%s",new_mem[count].id);
            token = strtok(NULL, "|");

        if (token == NULL) continue;
            strcpy(new_mem[count].password, token);
            token = strtok(NULL, "|");

        if (token == NULL) continue;
            strcpy(new_mem[count].name, token);
            token = strtok(NULL, "|");

        if (token == NULL) continue;
            new_mem[count].age = atoi(token);
            token = strtok(NULL, "|");

        if (token == NULL) continue;
            strcpy(new_mem[count].phone_num, token);
        
        count++;
    }
    fclose(file);

    for (int j = 0; j < count; j++) {
        printf("회원 %d: %s, %s, %s, %d, %s\n", j+1, new_mem[j].id, new_mem[j].password, new_mem[j].name, new_mem[j].age, new_mem[j].phone_num);
    }
}

void search_mem(){
    csv_to_struct_mem(new_mem);
    int search_mem_choice;
    char search_name[50];
    char all_mem_name [MAX_MEMBERS] ={0};

    printf("회원검색합니다~ \nID로 찾기: 1\n이름으로 찾기: 2\n >>> ");
    scanf("%d",&search_mem_choice);


    if(search_mem_choice == 2){
        puts("이름으로 검색함!~");
        printf("검색할 이름 입력: ");
        scanf("%s",search_name);
        printf("입력한 이름: %s\n",search_name);

        for(int i =0; i <11; i++){
            if(strcmp(search_name,new_mem[i].name)==0){
                printf("일치하는 회원정보가 있습니다.\n");  //몇건?
                printf("ID: %s, 나이: %d, 전화번호: %s",new_mem[i].id,new_mem[i].age,new_mem[i].phone_num);
            }
        }
    }
        
}

void delete_a_article_from_articles(int del_index)
{
     // ./article.csv 파일의 내용을 구조체 변수에 담는 함수
    // 호출후 articles라는 구조체 배열에 모두 담는다.
    store_to_article_struct(); 

    // 6번인덱스를 지우고싶다면 
    // 이건 삭제를 위한 인덱스 추후 삭제하고자 하는 인덱스를 입력받음
    int delete_index= del_index; 
    //
    //삭제하는 내용!
    for(int i=delete_index; i<30; i++)
    {
        articles[i] = articles[i+1];
    }
    //파일에 씁시다! 조심 w는 재앙이야!
    FILE *file = fopen("./article.csv","w");
    if(file==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        
    }
    for(int i=0; i<articles_cnt; i++)
    {
        fprintf(file, "%d,%s,%s,%s,%s,%d\n",
        articles[i].article_id,articles[i].article_title,
        articles[i].article_content,articles[i].writer_id,
        articles[i].reciever_id,articles[i].wrtie_time);
    }

    fclose(file);
}

void store_to_article_struct()
{
    FILE *file = fopen("./article.csv","r");
    
    // 구조체 배열을 0으로 초기화한다! - 사용중인 배열의 마지막을 찾기위한 초기화
    memset(&articles,0,sizeof(articles));

    char line[256];// 한줄을 저장할 배열

    if(file==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        
    }
    //50개의 구조체 배열을 생성했다. 삭제를 위한! 
    
    int row_count=0;    
    //reading by line
    while(fgets(line, sizeof(line),file))
    {

        char *token = strtok(line,",");
        
        int field_count =0;
        //reading by column(쉼표를 이용한 필드 )
        while(token !=NULL)
        {
           //글 id
            if(field_count==0)
           {
            int article_id = atoi(token);
            if(article_id!=0)            
                // printf("%d\t", article_id); //각 필드를 출력
                //구조체에 넣자!
                articles[row_count].article_id = article_id;       
           }
           //글제목
           else if(field_count==1)
           {
            char title[50];
            //파일 토큰에서 글제목을 가져와서
            strcpy(title,token);
            // 구조체 아티클[행번호].글제목으로 넣는다!
            strcpy(articles[row_count].article_title, title);       

           }
           //글 컨텐츠
           else if(field_count==2)
           {
            char content[50];
            //파일 토큰에서 글내용을 가져와서
            strcpy(content,token);
            // 구조체 아티클[행번호].글내용으로 넣는다!
            strcpy(articles[row_count].article_content, content);       

            // printf("글내용 :%s\t", content); //각 필드를 출력
           }
            // 글작성자 아이디
           else if(field_count==3)
           {
            char writer[50];
            // 파일 토큰에서 작성자를 가져와서
            strcpy(writer,token);
            // 구조체 아티클[행번호].작성자로 넣는다.!
            strcpy(articles[row_count].writer_id, writer);
            // printf("작성자입니다 %s\t", writer); //각 필드를 출력
           }
           else if(field_count==4)
           {
            //받는이가 없는 경우도 있습니다 기본값이 0입니다.
            char reciever[50];
            // 파일 토큰에서 작성자를 가져와서
            strcpy(reciever,token);
            // 구조체 아티클[행번호].작성자로 넣는다.!
            strcpy(articles[row_count].reciever_id, reciever);
           }
           else if(field_count==5)
           {
            int write_time;
            write_time=atoi(token);
            articles[row_count].wrtie_time = write_time;
            
           }
            token = strtok(NULL, ","); //다음 필드로 이동
            field_count++;
                        
        }
        row_count++;
        printf("\n");
        articles_cnt++; //전역 
    }
        //구조체에 담는것까진 완성! 3칸이 쓰레기 값이 들어감 
    // for (int i=0; i < row_count; i++)
    // {
    //     printf("인덱스!! %d \n", i);
    //     printf("글제목 : %s \n",articles[i].article_title);
    //     printf("글내용 : %s \n",articles[i].article_content);
        
    // }

    fclose(file);
}

void write_a_article()
{
    FILE *file = fopen("./article.csv","a");

    if(file ==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        exit(1);
    }
    // 입력을 받는 함수/  사용자로부터 입력받는 필드 글제목, 컨텐츠
    

    // 받은 입력을 구조체에 넣는 함수/ 입력외에 들어가는 정보들 article 마지막id, user_id, time_t

    char user_id[50] = "박경태01";
    // char sender_id[3]= " ";  //없으면 공백으로 쓰자
    char receiver_id[50] =" ";
    time_t seconds;
    time(&seconds);

    article a;
    a = get_input();
    a.article_id = 17;
    // strcpy(a.article_title, "돼지고기를 먹는방법");
    // strcpy(a.article_content, "언제든먹을수 있지");
    strcpy(a.writer_id, user_id);
    strcpy(a.reciever_id, receiver_id);
    a.wrtie_time = seconds;

   
    /** 글번호 / 글제목/ 컨텐츠/ 글작성자/ 받는분/ 작성시간  <<-- 입력을 받아서 글등록하도록 변경 예정 */  
    // fprintf(file, "16,돼지고기를 먹는방법, 언제든먹을수 있지, %s, ,%d, \n", user_id, seconds);  
    fprintf(file ,"%d, %s,%s,%s,%s,%d\n",
         a.article_id,
         a.article_title,
         a.article_content,
         a.writer_id,
         receiver_id,
         a.wrtie_time 
        );

    fclose(file);
}

article get_input()
{
    article a;
    char title[50];
    char content[500];

    printf("글 제목을 입력해주세요\n");
    scanf("%[^\n]", title);
    getchar();
    printf("글 내용을 입력해주세요\n");
    scanf("%[^\n]", content);

    // printf("%s\t%s", title, content);
    strcpy(a.article_title, title);
    strcpy(a.article_content, content);
    return a;
}

void show_article_list()
{

    FILE *file = fopen("./article.csv","r");
    
    
    char line[256];// 한줄을 저장할 배열

    if(file==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        
    }

    //reading by line
    while(fgets(line, sizeof(line),file))
    {
        char *token = strtok(line,",");
        int field_count =0;
        //reading by column(쉼표를 이용한 필드 )
        while(token !=NULL)
        {
           //글 제목
            if(field_count==0)
           {
            int article_id = atoi(token);
            if(article_id!=0)            
                printf("%d\t", article_id); //각 필드를 출력

           }
           else if(field_count==1)
           {
            char title[50];
            strcpy(title,token);
            printf("%s\t", title); //각 필드를 출력
           }

            token = strtok(NULL, ","); //다음 필드로 이동
            field_count++;
            //타이틀만 나오게 하려면 어떻게 해야할까?
            
        }
        printf("\n");
    }

    fclose(file);
    

}

void check_password(){
    int lower_, upper_,digit_, spec_; // 소문자, 대문자, 숫자
    char password[20]; // 비밀번호 입력하는 배열이구요
    int special[20] = {0}; // 특수문자배열. 문자를 "숫자화" 하여 아스키로 인식하게 하는 배열
    int korean_ = 0;  //한글 확인할때
    char check_pw[20] = {0};  //비밀번호 확인할때

    while(1){
        printf("비밀번호를 입력하세요: ");
        scanf("%s",password);
        lower_= upper_ = digit_ = spec_ =0; //초기화

        //특수문자를 입력했을때 아스키코드로 나타나게 하기 위한것. 문자"!"를 --> 정수 배열에 34 로 저장
        for(int i =0; i<strlen(password); i++){
            special[i] = password[i];
        }

        // 숫자, 대문자, 소문자, 특수문자를 각 변수에 담아냄
        for(int i=0; i<strlen(password); i++){
            if(password[i] >= '0' && password[i] <= '9')
                digit_ = 1;
            else if(password[i] >= 'A' && password[i] <= 'Z')
                upper_ = 1;
            else if(password[i] >= 'a' && password[i] <= 'z')
                lower_ = 1;
            else if((special[i] >= 33 && special[i] <= 38) || special[i] == 64) 
                spec_ = 1;
            else {
                korean_ = 1;
            }
        }
        if(korean_ == 1) { // 한글이면 먼저 걸러주기
            korean_ = 0; // 초기화 순서 중요 !!! 초기화먼저 해줘야 korean = 1값이 남아있지 않고 while문으로 돌아감
            printf("한글입력 하지마세요.\n");
            continue;
        }
        else if((digit_ == 1) && (upper_ == 1) && (lower_ == 1) && (spec_ == 1) && (strlen(password)>=6)){
           
            printf("적절한 암호입니다.\n");

            while(1){

                printf("비밀번호확인: ");
                scanf("%s",check_pw);
            
                if(strcmp(password,check_pw) == 0){
                    printf("비밀번호가 일치합니다.\n");
                    break;
                }
                else{
                    printf("비밀번호 불일치\n");
                }

            }

            break;
        }
        else{
            printf("6자리 이상. 숫자, 대문자, 소문자, 특수문자(!,#,$,%%,&,@) 모두 사용하여 입력하세요.\n");
        }
    }

    new_password[40] = password[20];

}