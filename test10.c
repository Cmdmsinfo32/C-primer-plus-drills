#include<stdio.h>
#define SIZE 4
void arrayAdd(int *, int *, int *, int);

int main(int argc, char** argv){
    int add1[SIZE] = {2, 4, 5, 8};
    int add2[SIZE] = {1, 0, 4, 6};
    int add3[sizeof add1 / sizeof add1[0]];
    arrayAdd(add1, add2, add3, sizeof add1 / sizeof add1[0]);
    for (int i =0; i < sizeof add3 /sizeof add3[0]; i++){
        printf("%d ", add3[i]);
    }

    getchar();
    return 0;
}

void arrayAdd(int *arr1, int *arr2,int *arr3, int length){
    int(**ptr)[20];
    for (int i = 0; i < length; i++){
        *arr3++ = *arr1++ + *arr2++;
    }
}