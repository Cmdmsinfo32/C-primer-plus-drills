#include<stdio.h>
int main(){
    int a[30];
    *(a + 1) = 1;
    printf("%d", a[1]);

    getchar();
    return 0;
}