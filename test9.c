#include <stdio.h>
#define ROW 3
#define COLUMN 5
void copy2d(int r, int c, double obj[r][c], double src[r][c]);
void show2d(int r, int c, double obj[r][c]);

int main()
{
    double a[ROW][COLUMN] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};
    int varyR = ROW;
    int varyC = COLUMN; // 使用define值定义新数组不是变长数组，必须新设变量
    double vla[varyR][varyC];
    copy2d(varyR, varyC, vla, a);
    show2d(varyR, varyC, vla);
    printf("\n");
    show2d(ROW, COLUMN, a);

    getchar();
    return 0;
}

void copy2d(int r, int c, double obj[r][c], double src[r][c])
{
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            obj[i][j] = src[i][j];
    }
}

void show2d(int r, int c, double obj[r][c])
{
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            printf("%.2f ", obj[i][j]);
        printf("\n");
    }
}