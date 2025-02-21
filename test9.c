// test9 -- 第九题
#include<stdio.h>
int main(){
    int input;
    int is_prime;
    int verification;
    int start;

    printf("Please enter integer number over 2:");
    scanf("%d", &input);
    for (verification = 2; verification <= input; verification++){
        is_prime = 1;
        for (start = 2; start < verification; start++)
            if(!(verification % start)){
                is_prime = 0;
                break;
            }
        if (is_prime)
            printf("Below Ur %d, %d is a prime\n", input, verification);
    }

    getchar();
    getchar();
    return 0;
}