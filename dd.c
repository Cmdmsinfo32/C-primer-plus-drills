#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    int m;
    m = (m = a > b ? a : b) > c ? m : c;
    printf("%d", m);

    getchar();
    return 0;
}