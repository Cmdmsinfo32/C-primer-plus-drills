// test6 -- 第六题
#include <stdio.h>
int main()
{
    int sum;
    int day;
    int ori;

    printf("Please enter the number of days ur shop operating:");
    scanf("%d", &day);
    while (day > 0)
    {
        sum = 0;
        ori = day++;
        while (--day > 0)
        {
            sum += day * day;
        }
        printf("In these %d days, u have earned $%d.\n", ori, sum);
        printf("Please enter the number of days ur shop operating(<=0 to quit):");
        scanf("%d", &day);
    }
    printf("bye!\n");

    getchar();
    getchar();
    return 0;
}