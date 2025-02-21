// test 11 -- 第十题 任意进制计算器
#include<stdio.h>
void to_base_n(int, int);

int main(){
    int num;
    int base;
    scanf("%d%d", &num, &base);
    to_base_n(num, base);

    getchar();
    getchar();
    return 0;
}

void to_base_n(int num, int base){
    int r = num % base;
    if(num >= base)
        to_base_n(num / base, base);
    putchar(r + 48);
}