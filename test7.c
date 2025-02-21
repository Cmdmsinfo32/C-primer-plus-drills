// test 7 -- 第六题
#include<stdio.h>
void dispose(double *, double *, double *);

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    dispose(&a, &b, &c);
    printf("%.2f,%.2f,%.2f", a, b, c);

    getchar();
    getchar();
    return 0;
}

void dispose(double* x,double* y,double* z){ //double* x = &a <==> double* x; x = &a 指针变量x的值为a的地址，称指针x指向了a（的地址）
//完成上述引用传递后，此时a有了两个引用方法，一是通过变量名称a，二是通过指针变量的解引用*x
    double first;
    double second;
    double third;
    double Num[3] = {*x, *y, *z};
    int length = sizeof(Num) / sizeof(Num[0]);
    for (int i = 0; i < length - 1; i++){
        for (int j = 0; j < length - i - 1; j++){
            if(Num[j] > Num[j + 1]){
                double temp;
                temp = Num[j + 1];
                Num[j + 1] = Num[j];
                Num[j] = temp;
            }
        }
    }
    *x = Num[0]; 
    //全局和局部全部共享地址
    //由于x指向a（x=&a），故指针变量x的解引用 *x=a，此语句相当于对主调函数的变量进行赋值即 a=Num[0]
    *y = Num[1];
    *z = Num[2];
}