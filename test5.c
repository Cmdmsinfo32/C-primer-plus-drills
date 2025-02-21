// test5 -- 第五题
#include<stdio.h>
int main(){
    int i;
    int j;
    int k;
    char ch;

    for (i = 1; i <= 5; i++){
        for (j = 5; j > i; j--)
            printf(" ");
        for (k = 1, ch = 'A'; k <= i; k++, ch++)
                printf("%c", ch);
        ch--;
        while(--ch >= 'A')
                printf("%c", ch);
        printf("\n");
    }

    getchar();
    return 0;
}