#include <stdio.h>

int main()
{
    int a[10] = {[1] = 3, [2] = 3, 4, 5};

    for (int i = 0; i < 10;i++)
        printf("%d,", *(a + i));
    
    getchar();
    return 0;
}