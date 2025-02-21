// test 2 -- 第二题
#include <stdio.h>
int main(){
    int num;
    int origin;

    printf("Please enter a number u like:");
    scanf("%d", &num);
    origin = num;
    num--;
    while (num++ < origin + 10)
        printf("%d ", num);

    getchar();
    getchar();
    return 0;
}