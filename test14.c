#include <stdio.h>
int main()
{
    int **ptr;
    int a[2] = {5, 2};

    int *p = a;
    ptr = &p;

    printf("%p,%p\n", **ptr, a[0]);
    printf("%p,%p", *(*ptr+1), a[1]);

    getchar();
    return 0;
}