// test7 -- 第七题
#include<stdio.h>
#define SIZE 26
int main(){
    char word[SIZE];
    int index;
    
    index = 0;
    scanf("%c", &word[index]);
    while(word[index] != '\n')
        scanf("%c", &word[++index]);// <=/=> while(word[index++] != '\n')  scanf("%c",&word[index]) 会多输出一个换行符
        //为什么要先判断是不是换行符再输入而不是先输入再判断是不是换行符，如果是直接break掉这个循环呢？因为这样的话字符数组会多出一个换行符，而且程序看起来也不美观
    while(index-- > 0)
        printf("%c", word[index]);// <==> while(index > 0)  printf("%c",word[--index])

    getchar();
    return 0;
}