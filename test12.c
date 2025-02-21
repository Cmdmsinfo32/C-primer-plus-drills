// test12 -- 第十二题
#include<stdio.h>
int main(){
    double sum1;
    double sum2;
    double item;
    double sign;
    long times;

    printf("Please enter the number of items u wanna add:");
    scanf("%ld", &times);
    while(times > 0){
        sum1 = 0;
        sum2 = 0;
        item = 0;
        sign = 1;
        while(item++ < times){
            sum1 += 1. / item;
            sum2 += sign * (1. / item);
            sign = -sign;
        }
        printf("The sum1 is %f while the sum2 is %f\n", sum1, sum2);
        printf("Please enter the number of items u wanna add(<=0 to quit):");
        scanf("%d", &times);
    }
    printf("Bye!");

    getchar();
    getchar();
    return 0;
}