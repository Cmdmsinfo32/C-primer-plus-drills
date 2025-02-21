#include<stdio.h>
#define ROW 3
#define COLUMN 5
void plus(int (*pr)[COLUMN], int row);
void show(int [][COLUMN], int);

int main(){
    int a[ROW][COLUMN] = {
        {1, 2, 3, 4, 5}, 
        {6, 7, 8, 9, 10}, 
        {11, 12, 13, 14, 15}
    };
    plus(a, ROW);
    show(a, ROW);

    getchar();
    return 0;
}

void plus(int (*pr)[COLUMN], int row){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < COLUMN; j++)
            pr[i][j] *= 2;
    }
}

void show(int pr[][COLUMN], int row){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < COLUMN; j++)
            printf("%d ", pr[i][j]);
        printf("\n");
    }
}