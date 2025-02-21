// test6 -- 第六题
#include<stdio.h>
int main(){
    int sup;
    int inf;
    int now;
    // int cnt = 0; //now = inf + cnt 可推得 cnt = now - inf

    printf("Please enter two numbers of inf and sup(inf sup):");
    scanf("%d %d", &inf, &sup);
    now = inf;
    printf("num    num^2    num^3\n");
    do
        printf("%-8d%-8d%-8d\n", now, now * now, now * now * now);
    while (now++ < sup);//(cnt++ < sup - inf)

    getchar();
    getchar();
    return 0;
}
