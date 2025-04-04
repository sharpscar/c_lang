#include <stdio.h>
#include <string.h>
#include <time.h>

// 글번호 / 글제목/ 컨텐츠/ 글작성자/ 받는분/ 작성시간 글
struct article {
    int article_id;
    char article_title[50];
    char article_content[500];
    char user_id[50];
    char reciever_id[50];
    int wrtie_time;
};


struct article get_input();

void show_article_list();

void write_a_article();

/*삭제를 하기위해 구조체 배열 변수에 파일의 내용들을 담는 함수*/
void store_to_article_struct(); 

int main()
{  

    FILE *file = fopen("./article.csv","r");
    
    
    char line[256];// 한줄을 저장할 배열

    if(file==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        
    }
    //50개의 구조체 배열을 생성했다. 삭제를 위한! 
    struct article articles[50]; 
    
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
            strcpy(articles[row_count].user_id, writer);
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
            //타이틀만 나오게 하려면 어떻게 해야할까?            
        }
        row_count++;
        printf("\n");
    }

    //구조체에 담는것까진 완성! 3칸이 쓰레기 값이 들어감 
    for (int i=0; i < row_count; i++)
    {
        printf("출력시작!\n");
        printf("글제목 : %s \n",articles[i].article_title);
        printf("글내용 : %s \n",articles[i].article_content);
        printf("출력끝!\n");
    }



    fclose(file);
  




    // show_article_list();
    // write_a_article();

    

    return 0;
}

void write_a_article()
{
    FILE *file = fopen("./article.csv","a");

    if(file ==NULL)
    {
        printf("파일을 열수 없습니다.\n");
        return 1;
    }
    // 입력을 받는 함수/  사용자로부터 입력받는 필드 글제목, 컨텐츠
    

    // 받은 입력을 구조체에 넣는 함수/ 입력외에 들어가는 정보들 article 마지막id, user_id, time_t

    char user_id[50] = "박경태01";
    // char sender_id[3]= " ";  //없으면 공백으로 쓰자
    int sender_id =0;
    time_t seconds;
    time(&seconds);

    struct article a;
    a = get_input();
    a.article_id = 17;
    // strcpy(a.article_title, "돼지고기를 먹는방법");
    // strcpy(a.article_content, "언제든먹을수 있지");
    strcpy(a.user_id, user_id);
    a.wrtie_time = seconds;

   
    /** 글번호 / 글제목/ 컨텐츠/ 글작성자/ 받는분/ 작성시간  <<-- 입력을 받아서 글등록하도록 변경 예정 */  
    // fprintf(file, "16,돼지고기를 먹는방법, 언제든먹을수 있지, %s, ,%d, \n", user_id, seconds);  
    fprintf(file ,"%d, %s,%s,%s,%d, %d",
         a.article_id,a.article_title, a.article_content,a.user_id,sender_id,a.wrtie_time );

    fclose(file);
}

struct article get_input()
{
    struct article a;
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