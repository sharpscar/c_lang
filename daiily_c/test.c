#include <stdio.h>
#include <stdbool.h>

int main(){

    // printf("\n");
    for (int i=0; i<5; i++)
    {
        for (int j = 5; j > i ; j--)
        {
            printf(" ");
        }
        for (int k=0; k<=i; k++) //         0
        {                        //       1 0
            printf("*");         //     2 1 0
        }
        printf("\n");
    }
    return 0;
}
