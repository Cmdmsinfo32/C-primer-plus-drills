#include <stdio.h>
#define SIZE 5
#define ROW 2
#define OK 200

typedef int Status;
Status copy_arr(double[], double[], int);
Status copy_ptr(double *, double *, int);
Status copy_ptrs(double *, double *, double *);

int main(){
    double source[ROW][SIZE] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.1}
    };
    double target3[sizeof source];
    printf("%d\n", sizeof(source));
    double(*pr)[SIZE] = source;
    while(pr < source + ROW){
        copy_ptrs(target3, *pr, *pr + SIZE); 
        //对照第 1 题，因为该题有现成的行数组求和函数，故只需要传入各行指针（外部指针）的值（各数组元素的首地址）即可
        //因此可以不设pc列指针（内部指针），而第一题没有行数组求和函数，故需精确到列元素，故需要列指针来完成求和
        pr++;
    }

    getchar();
    return 0;
}

Status copy_ptrs(double *obj, double *srcBegin, double *srcEnd)
{
    while (srcBegin < srcEnd)
        *obj++ = *srcBegin++;
    for (int i = 1; i <= SIZE; i++)
        printf("%.2f\n", *(srcBegin - i));
    return OK;
}
