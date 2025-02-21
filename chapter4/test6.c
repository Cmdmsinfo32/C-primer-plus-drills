// test6 -- 第六题
#include<stdio.h>
#include<string.h>
int main(){
    char first_name[30];
    char last_name[30];

    printf("Please enter ur first name:");
    scanf("%s", first_name);
    printf("Please enter ur last name:");
    scanf("%s", last_name);
    printf("%s %s\n", last_name, first_name);
    printf("%*d %*d", strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));

    getchar();
    getchar();
    return 0;
}