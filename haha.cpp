#include <stdio.h>
void change(int& b)
{
    b = 1;
    return;
}
int main(){
    int a = 3;
    change(a);
    printf("%d", a);

    getchar();
    return 0;
}
