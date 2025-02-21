// test2 -- 第二题
#include<stdio.h>
#define STOP '#'
int main(){
    char ch;
    int cnt;

    cnt = 0;
    printf("Please enter a train of text:");
    while((ch = getchar()) != STOP){
        if(!(cnt % 8))
            printf("\n");
        printf("%c-%d ", ch, ch);
        cnt++;
    }

    getchar();
    getchar();
    return 0;
}