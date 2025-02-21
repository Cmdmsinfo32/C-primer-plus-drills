#include <stdio.h>
typedef struct apple{
    int age;
    int cha;
} Apple, *pointerApple;
// main中定义结构体和结构体指针需要struct apple(*) xxx，为方便起别名令Apple代表struct apple，pointerApple代表struct apple*

int main(){
    Apple apple1;
    pointerApple p = &apple1;
    p->age = 1;
    p->cha = 2; // <==>(*p).age，不过这样写麻烦一般直接p->age，指指针p地址所指对象的age属性
    printf("%d", *(p+6));
    

    getchar();
    return 0;
}