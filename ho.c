#include <stdio.h>
void change(int a[]){
    int i;
    scanf("%d", &i);
    if (i == 2)
        return;
    a[i] = 99;
    return change(a); // <==> change(a); return ;
}
int main(){
    int a[5] = {1, 3, 4, 5, 0};
    change(a);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    getchar();
    getchar();
    return 0;
}