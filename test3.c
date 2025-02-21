// test3 -- 第三题
#include<stdio.h>
int main(){
    char i;
    char j;

    for (i = 'F'; i >= 'A';i--){
        for (j = 'F'; j >= i;j--){
            printf("%c", j);
        }
        printf("\n");
    }
    

    getchar();
    return 0;
}