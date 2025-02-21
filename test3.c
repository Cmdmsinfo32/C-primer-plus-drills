// test3 -- 第三题
#include<stdio.h>
int main(){
    const int WEEK_TO_DAY = 7;
    int day;

    printf("Please enter the number of day(<=0 to quit):");
    scanf("%d", &day);
    while(day > 0){
        printf("%d days are %d weeks, %d days.\n", day, day / WEEK_TO_DAY, day % WEEK_TO_DAY);
        printf("Please enter the number of day(<=0 to quit):");
        scanf("%d", &day);
    }
    printf("Bye!\n");

    getchar();
    getchar();
    return 0;
}