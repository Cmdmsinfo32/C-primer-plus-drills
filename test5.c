// test 5 -- 第五题
#include<stdio.h>
int main(){
    double single = 3e-23;
    int quarts;

    printf("please enter the quarts of water u have:");
    scanf("%d", &quarts);
    printf("u have %e water numerators.", quarts * 950 / single);

    getchar();
    getchar();
    return 0;
}