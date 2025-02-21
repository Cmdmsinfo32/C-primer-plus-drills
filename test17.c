#include<stdio.h>
int main(){
    void test(int a[]);
    int a[3] = {1, 2, 3};
    test(a);
    printf("%d", a[2]);

    getchar();
    return 0;
}

void test(int p[]){
    p = p + 2;
    *p = 66;
}