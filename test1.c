#include<stdio.h>
int main(){
    int a = 1, b = 2;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    int *temp;
    temp = pa;
    pa = pb;
    pb = temp;
    printf("%d,%d\n", *pa, *pb);
    printf("%p,%p\n", &a, &b);
    printf("%p,%p", pa, pb);

    getchar();
    getchar();
    return 0;
}