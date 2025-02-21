// test4 -- 第四题
#include<stdio.h>
int main(){
    int i;
    int j;
    char ch='A';
    char out;

    for (i = 0; i < 6; i++){
        for (j = 0; j <= i; j++, ch++)
        {
            out = ch;
            printf("%c", out);
        }
        printf("\n");
    }

    getchar();
    return 0;
}