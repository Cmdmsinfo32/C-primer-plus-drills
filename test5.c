//test5 -- 第五题
#include<stdio.h>
int main(){
    char ch;
    int target;
    int left;
    int right;

    left = 0;
    right = 100;
    target = (left + right) / 2;
    printf("Uh...is ur number %d?\n", target);
    while((ch = getchar()) != 'y'){
        if(ch == 'x'){
            left = target + 1;
            target = (left + right) / 2;
        }
        else if(ch == 'd'){
            right = target - 1;
            target = (left + right) / 2;
        }
        else
            printf("Sorry, I understand only x, d or y\n");
        printf("Well, Is ur number %d?\n", target);
        while(getchar() != '\n')
            continue;
    }
    printf("I know I could do it!\n");

    getchar();
    getchar();
    return 0;
}