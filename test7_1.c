// test7 -- 第七题
#include <stdio.h>
#define SIZE 26
int string_length();
int _index = 0;
char word[SIZE];
int main()
{
    int strlen;

    strlen = string_length();
    while (_index-- > 0)
        printf("%c", word[_index]);
    printf("\n");
    printf("%d", strlen);
    getchar();
    return 0;
}
int string_length()
{
    while (scanf("%c", &word[_index]) && word[_index++] != '\n')
        ; // 第一个条件其实是恒成立的，它可以接收任何来自键盘上的（包括非键盘上的）字符，这样写不好，最好的写法是先判断输入是不是换行符，如果不是继续输入（即由此进入循环），如果是换行则循环结束，问题又来了，第一次我没有任何输入怎么判断是不是换行呢，很简单，只需要在循环前加入一个scanf函数判断第一个字符能否进入循环即可（由此得到的经验是，对于交互式程序，若存在输入数值控制的要求（如数值>0,字符不是\n），必须在进入循环体之前有一个scanf（循环体的最后还有一个scanf）；若存在格式控制（如不能输入数字或字母，即和scanf中的一个或几个%匹配不上），则只需在while条件中整合出一个scanf即可，不需要在进入循环体前加入一个scanf和循环体的最后加入scanf；如若既想实现数值控制又想实现格式控制，则须在while中&&两个条件，但对于这个例子来说，在格式控制中，scanf要求输入的是%c，因此对于所有输入都能成立，这里更好的例子是chapter5的test9，要求在输入华氏度是浮点数的同时，要求输入的华氏度温度大于零，此时scanf要求则是%lf，对于键盘中输入字母或是控制字符都会使测试条件为假。//空语句，这样写不好，看起来也不美观
    // int len = --_index;
    return --_index;
}