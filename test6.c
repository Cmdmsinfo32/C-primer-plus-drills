// test6 -- 第六题
#include<stdio.h>
#define STOP '#'
int main(){
    char now;
    char pre;
    unsigned char cnt;

    cnt = 0;
    pre = 'a';
    while((now = getchar()) != STOP){
        if(pre == 'e' && now == 'i')
            cnt++;
        pre = now;
    }
    printf("In this input, the \"ei\" emerge %d", cnt);

    getchar();
    getchar();
    return 0;
}