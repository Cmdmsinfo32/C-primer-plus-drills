// test4 -- 第四题
#include<stdio.h>
int main(){
    float height;
    char name[30];

    printf("Please enter ur name and height in centimeter:");
    scanf("%s%f", name, &height);
    printf("%s,u r %.2f meters tall.", name, height / 100);

    getchar();
    getchar();
    return 0;
}