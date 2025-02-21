// test1 -- 第一题
#include <stdio.h>
#define SIZE 26
int main(){
    char alphabet[SIZE];
    int index;
    char ch;

    for (index = 0, ch = 'a'; ch < 'z'; index++, ch++){
        alphabet[index] = ch;
        printf("%c ", alphabet[index]);
    }

    getchar();
    return 0;
}