#include <stdio.h>

#define SIZE 5
int ax(int[], int[]);

int main()
{
    int a[SIZE] = {4, 2, 5, 1, 3};
    printf("%d", ax(a, a + SIZE));

    getchar();
    return 0;
}

int ax(int *begin, int *end){
    int intmax = *begin;
    while (begin < end){
        if (*begin > intmax)
            intmax = *begin;
        begin++;
    }  
    return intmax;
}