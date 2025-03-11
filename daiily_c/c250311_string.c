#include <stdio.h>
#include <string.h>
#define PI 3.141592 //전처리기


int main()
{
 
    char a = 'a';
    char b[] = "ABC";
    char c[] = "안녕하세요";

    printf("%zd\n", sizeof(b)/sizeof(char));
    printf("%zd\n", sizeof(c)/sizeof(char));

    printf("%ld\n",strlen(b));
    printf("%ld\n",strlen(c));
    
    
    return 0;

}


