#include <stdio.h>

int main()
{
    int len=9;
    int half=len/2;
    for (int i=0;i<len/2;i++){
        for (int j=0;j<half-i;j++){
            printf("1");
        }

        for (int j=0;j<2*i+1;j++){
            printf("*");
        }

        printf("\n");
    }
    for (int j=0;j<2*half+1;j++){
        printf("*");
    }
    printf("\n");
    for (int i=len/2;i>0;i--){
        for (int j=half-i+1;j>0;j--){
            printf(" ");
        }

        for (int j=2*i-1;j>0;j--){
            printf("*");
        }

        printf("\n");
    }
}
