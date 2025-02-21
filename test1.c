//test1 -- 第一题
#include<stdio.h>
#define STOP '#'
int main(){
    int sp_cnt;
    int n_cnt;
    int char_cnt;
    char ch;

    sp_cnt = n_cnt = char_cnt = 0;
    while((ch = getchar()) != STOP){
        if(ch == ' ')
            sp_cnt++;
        if(ch == '\n')
            n_cnt++;
        char_cnt++;
    }
    printf("Ur input has %d spaces, %d ns and %d chars\n", sp_cnt, n_cnt, char_cnt);

    getchar();
    getchar();
    return 0;
}