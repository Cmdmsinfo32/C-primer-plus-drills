// test8 -- 第八题
#include<stdio.h>
int main(){
    const int constant;
    int vary;
    int left;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &constant);
    printf("Now enter the first operand:");
    scanf("%d", &vary);
    while(vary>0){
        left = vary % constant;
        printf("%d %% %d is %d\n\n", vary, constant, left);
        printf("Enter the first operand(<=0 to quit):");
        scanf("%d", &vary);
    }
    printf("Done!");

    getchar();
    getchar();
    return 0;
}