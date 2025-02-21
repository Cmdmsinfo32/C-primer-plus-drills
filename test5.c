#include <stdio.h>
#define SIZE 5
double max_min(double *, double *);

int main()
{
    double a[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("%.2f", max_min(a, a + SIZE));

    getchar();
    return 0;
}

double max_min(double *begin, double *end)
{
    double max = *begin; // 自动变量需要显式初始化
    double min = *begin; // 自动变量需要显式初始化
    while (begin < end)
    {
        if (*begin > max)
            max = *begin;
        if (*begin < min)
            min = *begin;
        begin++;
    }
    return max - min;
}