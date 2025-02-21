// test 2 -- 第二题
#include<stdio.h>
void chline(char, int, int);
int main(){
    int line, row;
    char c;
    scanf("%d %d %c", &line, &row, &c);
    chline(c, line, row);

    getchar();
    getchar();
    return 0;
}

void chline(char ch,int i,int j){
    for (int m = 1; m <= i; m++){
        for (int n = 1; n <= j; n++)
            putchar(ch);
        putchar('\n');
    }
}