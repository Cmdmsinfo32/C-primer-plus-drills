// test7 -- 第七题
#include <stdio.h>
#define CONSTITUENTS_1 8.75
#define CONSTITUENTS_2 9.33
#define CONSTITUENTS_3 10.00
#define CONSTITUENTS_4 11.20
#define STOP 5
#define OVER_WORK_LIMIT 40
#define OVER_WORK_RATE 1.5
#define FIRST_LIMIT 300
#define SECOND_LIMIT 450
#define FIRST_RATE 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25
#define BASE_ONE FIRST_RATE *FIRST_LIMIT;
#define BASE_TWO BASE_ONE + SECOND_RATE *(SECOND_LIMIT - FIRST_LIMIT)

char getFirst()
{
    char ch;
    // ch = getchar();
    while ((ch = getchar()) && (ch == ' ' || ch == '\t' || ch == '\n'))
        continue;//适用性更强，可以不删除一行后面所有的输入，使其保留在stdin流中
    // while (getchar() != '\n')
    //     continue;
    
    return ch;
}

int main()
{
    int week_hour;
    char choice;
    double constituent;
    double base_down;
    double salary;
    double tax;
    double net_income;
    void guide();

    guide();
    while ((choice = getFirst()) && choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            constituent = CONSTITUENTS_1;
            break;
        case 'b':
            constituent = CONSTITUENTS_2;
            break;
        case 'c':
            constituent = CONSTITUENTS_3;
            break;
        case 'd':
            constituent = CONSTITUENTS_4;
        }
        base_down = constituent * OVER_WORK_LIMIT;
        printf("Please enter ur work hour a week:");
        scanf("%d", &week_hour);
        salary = (week_hour > OVER_WORK_LIMIT) ? base_down + OVER_WORK_RATE * constituent * (week_hour - OVER_WORK_LIMIT) : constituent * week_hour;
        if (salary <= FIRST_LIMIT)
        {
            tax = salary * FIRST_RATE;
        }
        else if (salary <= SECOND_LIMIT)
        {
            tax = BASE_ONE + SECOND_RATE * (salary - FIRST_LIMIT);
        }
        else
            tax = BASE_TWO + THIRD_RATE * (salary - SECOND_LIMIT);
        net_income = salary - tax;
        guide();
    }
    printf("Bye!");

    getchar();
    return 0;
}

void guide(){
    rintf("****************************************************************\n");
    printf("\n");
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("a) $8.75/hr                 b)$9.33/hr\n");
    printf("c) $10.00/hr                d)$11.20/hr\n");
    printf("q) quit\n");
    printf("****************************************************************\n");
}