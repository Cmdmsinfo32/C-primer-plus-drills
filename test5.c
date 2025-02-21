// test5 -- 第五题
#include<stdio.h>
#define BYTE_TO_BIT 8 
int main(){
    float speed;
    float size;
    float time;

    printf("Please enter ur download speed in megabits per second:");
    scanf("%f", &speed);
    printf("Now enter the file size in megabytes per second:");
    scanf("%f", &size);
    time = size * BYTE_TO_BIT / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f second.", speed, size, time);

    getchar();
    getchar();
    return 0;
}