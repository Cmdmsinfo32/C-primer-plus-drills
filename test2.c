// test2 -- 第二题
#include<stdio.h>
int main(){
    int i;
    int j;

    for (i = 0; i < 5; i++){
        for (j = 0; j <= i;j++){
            printf("$");
        }
        printf("\n");
    }

    getchar();
    return 0;
}