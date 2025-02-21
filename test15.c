// test15 -- 第十五题
#include <stdio.h>
#define SIZE 50
int main()
{
    char input[SIZE];
    int index;

    index = 0;
    scanf("%c", &input[index]);
    while (input[index] != '\n')
        scanf("%c", &input[++index]);
    while (index-- > 0)
        printf("%c", input[index]);
    // 数组存储让一个循环得以分成许多循环进行。若是逆序输出，则必须需要分两个循环（输入和输出），故必须需要数组存储，因为你不输入后续元素就无法得到正确输出；如果是顺序输出，可在一个循环中输入和输出，但上个例子中，要求打印换行符（两个数组上下展示），所以将一个循环拆成两个循环过程输出，因此构建了double数组。
    getchar();
    return 0;
}