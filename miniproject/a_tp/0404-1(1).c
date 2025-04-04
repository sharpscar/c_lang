#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct_member.h"
#define MAX_MEMBERS 100

void search_mem(member* new_mem){
    int search_mem_choice;
    char search_id[50];
    char all_mem_id [MAX_MEMBERS] ={0};

    printf("회원검색합니다~ \nID로 찾기: 1\n이름으로 찾기: 2\n >>> ");
    scanf("%d",&search_mem_choice);

    if(search_mem_choice == 1){
        puts("아이디로 검색함!~");
        printf("검색할 아이디 입력: ");
        scanf("%s",search_id);
        for(int i =0; i <MAX_MEMBERS; i++){
            if(strstr(new_mem[i].id, search_id) != NULL){
                //어뜨카지
            }
        }
        
        //char* strstr(char* string, char* search);
    }
        
}

int main(){
    member new_mem[MAX_MEMBERS];
    FILE *fp = fopen("account.csv", "a");  // 파일이 없으면 생성, 있으면 이어쓰기 모드 a+이랑은 뭐가 다르지?
    if (fp == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        exit(1);
    }
    search_mem(new_mem);

}
