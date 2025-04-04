#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct_member.h"
#define MAX_MEMBERS 100


char new_id [40];
char new_password[40];
char new_name[20];
int new_age;
char new_phone_num[20];

void csv_to_struct_mem();
void search_mem();
member new_mem[MAX_MEMBERS]; 


int main() {
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
    


void csv_to_struct_mem() {  // 멤버 csv 내부 텍스트 메인함수 구조체로 가져오는 함수
    FILE *file = fopen("account.csv","r");
    char line[255];
    int count = 0;

    while(fgets(line, sizeof(line),file) != NULL && count < MAX_MEMBERS){
        // line[strcpn(line,"\n")] = 0;  //줄바꿈 문자 0으로 바꿔줌
        char *token = strtok(line,",");  //,기준으로 나누어 가져오겟다

        if(token == NULL) continue;
            strcpy(new_mem[count].id, token);
            token = strtok(NULL, ",");

        if (token == NULL) continue;
            strcpy(new_mem[count].password, token);
            token = strtok(NULL, ",");

        if (token == NULL) continue;
            strcpy(new_mem[count].name, token);
            token = strtok(NULL, ",");

        if (token == NULL) continue;
            new_mem[count].age = atoi(token);
            token = strtok(NULL, ",");

        if (token == NULL) continue;
            strcpy(new_mem[count].phone_num, token);
        
        count++;
    }
    fclose(file);

    for (int j = 0; j < count; j++)
    {
        printf("회원 %d: %s, %s, %s, %d, %s\n", j+1, new_mem[j].id, new_mem[j].password, new_mem[j].name, new_mem[j].age, new_mem[j].phone_num);
    }
}

void search_mem(){
    csv_to_struct_mem();
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










