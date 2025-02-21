// test1 -- 统计文件中的字符数
#include<stdio.h>
int main(){
    int ch;
    unsigned int count;

    while((ch = getchar()) != EOF)//<0 或 ==-1也可以
        count++;
    printf("This text has %d words.", count);
    
    getchar();
    return 0;
}