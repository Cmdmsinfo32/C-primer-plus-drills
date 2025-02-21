// test 12 -- 十一题
#include<stdio.h>
int Fibonacii(int);
int Arr_Fibonacii(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("Nor:%d\n", Fibonacii(num));
    printf("Arr:%d\n", Arr_Fibonacii(num));

    getchar();
    getchar();
    return 0;
}

int Fibonacii(int num){
    if(num == 1 || num == 2)
        return 1;
    int x = 1;
    int y = 1;
    int res = 0;
    for (int i = 3; i <= num; i++){//采用普通循环，需要调整顺序假指针
        res = x + y;
        x = y;
        y = res;
    }
    return res;
}

int Arr_Fibonacii(int num){//采用循环数组。不需要调整顺序假指针
    int Arr[3] = {1, 1, 0};
    for (int i = 3; i <= num; i++)
        Arr[(i - 1) % 3] = Arr[(i - 2) % 3] + Arr[(i - 3) % 3];
    return Arr[(num - 1) % 3];
}