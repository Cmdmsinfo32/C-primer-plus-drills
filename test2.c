#include <stdio.h>
#define TIME 10
int main()
{
    int ch;
    int cnt;

    cnt = 0;
    while ((ch = getchar()) != EOF)
    {
        if (!(cnt % 10))
            putchar('\n');
        if (ch == '\n')
        {
            putchar(ch);
            printf("\\n-%d ", ch);
            cnt++;
            continue;
        }
        if (ch == '\t')
        {
            printf("\\t-%d ", ch);
            cnt++;
            continue;
        }
        if (ch < ' ')
        {
            printf("^%c-%d ", ch + 64, ch);
            cnt++;
            continue;
        }
        printf("%c-%d ", ch, ch);
        cnt++;
    }

    getchar();
    return 0;
}