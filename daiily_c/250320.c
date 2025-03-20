#include <stdio.h>
#define MAXTITL 41 //최대 책 제목 길이+1
#define MAXAUTL 31 // 최대 저자명 길이 +1

void book();
char * s_gets(char *, int);
int main()
{
    book();
    return 0;
}

void book()
{
    struct book{
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;
    };

    struct book library;
    printf("도서 제목을 입력하시오. \n");
    s_gets(library.title, MAXTITL); //책제목 부분에 접근한다.
    printf("저자명을 입력하시오\n");
    s_gets(library.author, MAXAUTL);
    printf("정가를 입력하시오.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("종료.\n");

}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find='\0';
        else
            while(getchar() != '\n')
            continue;

    }  
    return ret_val;
}