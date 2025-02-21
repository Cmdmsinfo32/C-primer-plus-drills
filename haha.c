#include <stdio.h>
#include <stdlib.h>

void change(int **p)
{
    static int a = 10;
    *p = &a;
}

int main()
{
    int *pa;
    change(&pa);
    printf("%d", *pa);
    getchar();
    return 0;
}
