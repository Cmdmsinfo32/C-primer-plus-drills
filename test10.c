// test10 -- 第十题
#include<stdio.h>
int main(){
    int sum;
    int inf;
    int sup;
    int ori;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &inf, &sup);
    while(sup > inf){
        sum = 0;
        ori = inf;
        do
            sum += inf * inf;
        while (inf++ < sup);
        printf("The sums of the squares from %d to %d is %d\n", ori * ori, sup * sup, sum);
        printf("Enter next set of limits:");
        scanf("%d %d", &inf, &sup);
    }
    printf("Bye!");

    getchar();
    getchar();
    return 0;
}