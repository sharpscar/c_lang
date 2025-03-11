#include <stdio.h>

#include <limits.h> 
#include <float.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

//132


int main()
{
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);
    printf("%ld ", sizeof(s1));
    // printf("%s", s1,s2);

    return 0;

}