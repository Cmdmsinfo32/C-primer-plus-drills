#include<stdio.h>
#define SIZE 7
#define COP 3
void copy_select(double *, double*, int);

int main(){
    double a[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    double b[COP];
    int start;
    scanf("%d", &start);
    copy_select(a + start - 1, b, COP);
    for (int i = 0; i < COP; i++){
        printf("%.2f ", b[i]);
    }

    getchar();
    getchar();
    return 0;
}

void copy_select(double *srcBegin, double* obj, int length){
    double *srcEnd = srcBegin + length;
    while(srcBegin < srcEnd)
        *obj++ = *srcBegin++;
}