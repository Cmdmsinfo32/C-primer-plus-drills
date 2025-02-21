// example1 -- 例一
#include<stdio.h>
#define SPACE ' '
int main(){
    char ch;

    while((ch = getchar()) != '\n')//因为前面不是scanf，所以不需这样写：while(ch = getchar() && ch != '\n')，
    //往常因为测试条件中存在scanf时，要同时实现格式控制和数值控制要这么写：while(scanf("%lf",F) && F >0)
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
    putchar(ch);

    getchar();
    return 0;
}