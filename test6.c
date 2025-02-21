#include<stdio.h>
#define SIZE 5
void reverse(double *, double *);

int main(){
    double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    reverse(a, a + SIZE);
    for (int i = 0; i < SIZE; i++){
        printf("%.2f ", a[i]);
    }

    getchar();
    return 0;
}

void reverse(double *begin, double *spare){
    double *end = spare - 1;
    while(begin < end){
        *spare = *begin;
        *begin = *end;
        *end = *spare;
        begin++;
        end--; //此方法的优势在于，利用创建数组时最后一个元素后的指针存放需要调换过程的中间值
        //在调换过程中，指针指向不变但指针的指向的值调换来完成元素的逆置，调换完成后，两指针逐步逼近直至重合不再循环此过程。
    }
}