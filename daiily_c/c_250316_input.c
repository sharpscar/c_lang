#include <stdio.h>
int * user_input();

int main()
{
    int * nums;
    nums= user_input();

    for (int i=0; i<7;i++)
    {
        printf("%d\n",nums[i]);
    }
    return 0;
}


int * user_input()
{   
    int num1,num2,num3,num4,num5,num6;
    int static nums[6];
    int input_is_good;
    
    printf("정수를 한칸씩 띄어서 입력해주세요");
    scanf("%d %d %d %d %d %d", &num1,&num2,&num3,&num4,&num5,&num6);
    nums[0] = num1;
    nums[1] = num2;
    nums[2] = num3;
    nums[3] = num4;
    nums[4] = num5;
    nums[5] = num6;
    return nums;
}