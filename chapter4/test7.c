// test 7 -- 第七题
#include<stdio.h>
#include<float.h>
int main(){
    float a = 1. / 3.0;
    double b = 1.0 / 3.;

    printf("%.6f,%.6f\n%.12f,%.12f\n%.16f,%.16f\n", a, b, a, b, a, b);
    printf("%d,%d,%d", FLT_DIG, DBL_DIG, LDBL_DIG);

    getchar();
    return 0;
}