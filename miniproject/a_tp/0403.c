#include<stdio.h>
// id,password,name,phone,age
int main(){
FILE *fp;
char filename[] = "account.csv";
fp = fopen(filename, "a+");

if (fp == NULL){
    printf("파일을 열 수 없습니다.\n");
    return 1;
}

int flag = 0;
while(flag==1){
    if (id==1){
        fprintf(fp, "%s,",username);
        struct.member[0].name = username;
    }
    else{
        printf("유효하지않습니다 다시!")
        flag == 1
    }   
}