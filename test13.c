// test13 -- 第十三题
#include<stdio.h>
#define SIZE 8
int main(){
    int two_pow[SIZE];
    int index;
    int two = 2;

    for (index = 0; index < SIZE; index++){
        two_pow[index] = two;
        two *= 2;
    }
    index--;
    do
        printf("%d ", two_pow[index]);
    while (index-- > 0);

    getchar();
    return 0;
}