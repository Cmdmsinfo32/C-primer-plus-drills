#include<stdio.h>
int main(){
    int m = 99;
    int n = 99;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
                printf("%d × %d = \t", i, j);
            // printf("%d × %d = %d\t", i, j, i * j);
            if(!(j % 8))
                printf("\n");
            
        }
        printf("\n\n");
    }

    getchar();
    return 0;

}