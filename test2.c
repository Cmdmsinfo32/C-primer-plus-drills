#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
#define OK 200

typedef int Status;
Status copy_arr(double[], double[], int);
Status copy_ptr(double *, double *, int);
Status copy_ptrs(double *, double *, double *);

int main()
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[sizeof source];
    double target2[sizeof source];
    double target3[sizeof source];
    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + SIZE);
    double *ori = target3;
    double *end = target3 + SIZE;
    while(ori < end){
        printf("%.2lf ", *ori++);
    }

    getchar();
    return 0;
}

Status copy_arr(double obj[], double src[], int length)
{
    for (int i = 0; i < length; i++)
    {
        obj[i] = src[i];
        printf("%.2f\n", obj[i]);
    }
    return OK;
}

Status copy_ptr(double *obj, double *src, int length)
{
    double *hh = obj;
    for (int i = 0; i < length; i++)
        *obj++ = *src++;
    for (int i = 1; i <= length; i++)
        printf("%.2f\n", *(obj - i));
    return OK;
}

Status copy_ptrs(double *obj, double *srcBegin, double *srcEnd)
{
    while (srcBegin < srcEnd)
        *obj++ = *srcBegin++;
    // for (int i = 1; i <= SIZE; i++)
    //     printf("%.2f\n", *(srcBegin - i));
    return OK;
}
