// test 6 -- 第六题
#include <stdio.h>
char getFirst()
{
    char ch;
    // 接收上一步没有在末尾清除换行符的操作函数时能够保证输出第一个非空白字符（承前）
    while ((ch = getchar()) && (ch == ' ' || ch == '\t' || ch == '\n'))
        continue;
    /*<==>
    while(ch = getchar()){
        if(ch != ' ' && ch != '\t' && ch != '\n')
            break;}*/
    // 清除输入末尾的换行符和其他非首字符以免影响后续的操作函数（启后）
    while (getchar() != '\n')
        continue;
    // 清除末尾换行符时候若没有存储需求，直接循环getchar()即可；若有需求，定义变量ch2，在循环体中putchar(ch2)即可

    /*
      scanf()与getchar()不同，scanf(除了%c)会跳过所有空白（换行符，制表符和多个空格），而getchar()接受所有字符
      对于和接收类型不匹配的输入字符，scanf会将stdin流回退到不匹配数据的开始处
      前面是getchar()的严格输入控制逻辑，下面是scanf的严格输入控制逻辑：
      while((status = scanf(%x, &y)) != 1)
            scanf(%*s)
      stdin流的读取位置将跳至下一个空白字符处，使scanf(%x, &y)继续等待所需的数据类型%x进行读取，以免一直停留在数据原地造成死循环
      其实以上程序就是在用getchar()模拟scanf的读取io
    */
    return ch;
}
int main()
{
    putchar(getFirst());

    getchar();
    return 0;
}