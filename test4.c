#include <stdio.h>
#define SIZE 5
int index_(double *, double *);

int main()
{
    double a[SIZE] = {5.5, 1.1, 2.2, 3.3, 4.4};
    printf("%d", index_(a, a + SIZE));

    getchar();
    return 0;
}

int index_(double begin[], double end[])
{
    double *ori = begin;
    double *obj;
    double max = *begin; // 自动变量需要显式初始化

    while (begin < end)
    {
        if (*begin >= max)
        {
            obj = begin;
            max = *obj;
        }
        begin++;
    }
    return obj - ori + 1;//使用指针变量*obj，运用指针减法计算地址差值得出下标，若采用普通变量j的方法，欲得到下标直接返回该变量j+1即可
}