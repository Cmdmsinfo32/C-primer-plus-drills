// test6 -- 第六题
#include<stdio.h>
int main(){
    int sup;
    int inf;
    int now;
    int cnt;

    printf("Please enter two numbers of inf and sup(inf sup):");
    scanf("%d %d", &inf, &sup);
    printf("num    num^2    num^3\n");
    for (now = inf; now <= sup; now++){
        printf("%-8d%-8d%-8d\n", now, now * now, now * now * now);
    }

    getchar();
    getchar();
    return 0;
}