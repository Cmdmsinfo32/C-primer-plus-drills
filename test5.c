// test5 -- 第五题
#include<stdio.h>
#define STOP '#'
int main(){
    char ch;
    unsigned char cnt;

    cnt = 0;
    while((ch = getchar()) != STOP)
        switch (ch)
        {
        case '.':
            putchar(ch - 13);
            cnt++;
            break;
        case '!':
            putchar(ch);
            putchar(ch);
            cnt++;
            break;
        default:
            putchar(ch);
        }
    printf("In this input, %d %s %s been replaced.\n", cnt, cnt > 1 ? "words" : "word", cnt > 1 ? "have" : "has");

    getchar();
    getchar();
    return 0;
}