// test 6 -- 第六题
#include<stdio.h>
int main(){
    float inch;

    printf("Please enter ur height with inch: ");
    scanf("%f", &inch);
    printf("ur height is %.2f cm.", 2.54 * inch);

    getchar();
    getchar();
    return 0;
}