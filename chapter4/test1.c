// test 1 -- 第一题
#include<stdio.h>
int main(){
    char first_name[30];
    char last_name[30];

    printf("Please enter ur name:");
    scanf("%s%s", first_name, last_name);
    printf("%s,%s", first_name, last_name);

    getchar();
    getchar();
    return 0;
}