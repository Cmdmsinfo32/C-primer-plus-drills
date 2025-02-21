// test4 -- 第四题
#include<stdio.h>
#define STOP '#'
int main(){
    char ch;
    unsigned int cnt;

    cnt = 0;
    while((ch = getchar()) != STOP){
        if(ch == '.'){
            putchar(ch - 13);
            cnt++;
        }
        else if(ch == '!'){
            putchar(ch);
            putchar(ch);
            cnt++;
        }
        else
            putchar(ch);
    }
    printf("In this input, %d %s %s been replaced.\n", cnt, cnt > 1 ? "words" : "word", cnt > 1 ? "have" : "has");

    getchar();
    getchar();
    return 0;
}