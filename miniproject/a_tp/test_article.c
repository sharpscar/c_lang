#include <stdio.h>
#include <string.h>



void show_article_list();

int write_a_article();

int main()
{  
    show_article_list();

    return 0;
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