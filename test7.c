// test7 -- 第七题
#include<stdio.h>
void cube(double n);
int main(){
    double num;

    printf("Please enter a number used to calculate its cubic value:");
    scanf("%lf", &num);
    while(num>0){
        cube(num);
        printf("Please enter a number used to calculate its cubic value(<=0 to quit):");
        scanf("%lf", &num);
    }
    printf("Bye!\n");

    getchar();
    getchar();
    return 0;
}

void cube(double n){
    printf("Its cubic value is %.2f\n", n * n * n);
}
