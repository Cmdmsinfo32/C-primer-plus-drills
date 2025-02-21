#include <stdio.h>
#include <stdlib.h>

void createImmutableArray(int **myArray, int size){//用2级指针接收
    *myArray = (int *)malloc(size * sizeof(int)); 
    for (int i = 0; i < size; i++)
        (*myArray)[i] = i * 2;//这种方法不需要return
}//但是，如果不传入指针，只传入size，在该函数的最后返回一个malloc指针给主调函数就需要return了，在主调函数内用一指针变量接收

int main(){
    int size = 5;
    int *arr;//该1级指针没有初始化，即指向是未知的，此时不能用于指针间的赋值（int * myArray = arr），但其自身的地址是声明后就存在的，故下面的函数形参内定义2级指针，并初始化为外部1级指针（其本身）的地址，注意实参需要显式类型转换为二级地址。之前函数形参中常用的int * myArray = “ 外部函数数组名 ” 和这个不同的原因是数组名本身不是指针变量，而仅仅是个地址（指针常量）。
    createImmutableArray(&arr, size);
    printf("%d;", *(arr + 1));
    free((void *)arr);
    printf("%d", *(arr + 1));
    getchar();
    return 0;
}
//而最常用的数组名赋给函数形参中的指针这种情况，视数组名为0级指针，形参中指针为1级指针
//可得规律：要想在通过在函数内修改外部数据，外部定义为0级指针（&基本数据类型变量名或数组名）时
//函数形参需为1级指针接收0级指针的地址，通过函数内部1级指针的变化来改变外部数据
//要想在函数内修改外部数据，外部定义为1级指针，形参中指针需为2级指针，接收1级指针的地址（不是值）
