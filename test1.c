// test 1 -- 第一题
#include<stdio.h>
#define HOUR_TO_MIN 60
int main(){
    int min;
    int hour;
    int left;

    printf("Please enter a time for minute(<=0 to quit):");
    scanf("%d", &min);
    while(min>0){
        hour = min / HOUR_TO_MIN;
        left = min % HOUR_TO_MIN;
        printf("U have passed %d hours and %d minutes.\n", hour, left);
        printf("Please enter a time for minute(<=0 to quit):");
        scanf("%d", &min);
    }
    printf("Bye!\n");

    getchar();
    getchar();
    return 0;
}