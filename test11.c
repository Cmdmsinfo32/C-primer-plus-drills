// test11 -- 第十一题
#include<stdio.h>
#define SIZE 8
int main(){
    int num[SIZE];
    int index;

    for (index = 0; index < SIZE; index++)
        scanf("%d", &num[index]);
    while(index-- > 0)
        printf("%d ", num[index]);

    getchar();
    getchar();
    return 0;
}