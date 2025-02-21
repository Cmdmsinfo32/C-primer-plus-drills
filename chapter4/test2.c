// test 2 -- 第二题
#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int len;

    printf("Please enter ur name:\n");
    scanf("%s", name);
    len = strlen(name) + 3;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", len, name);

    getchar();
    getchar();
    return 0;
}