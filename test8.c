// test7 -- 第七题
#include<stdio.h>
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
#define BASE_ONE FIRST_RATE * FIRST_LIMIT;
#define BASE_TWO BASE_ONE + SECOND_RATE * (SECOND_LIMIT - FIRST_LIMIT)

int main(){
    int week_hour;
    int choice;
    double constituent;
    double base_down;
    double salary;
    double tax;
    double net_income;
    void guide();

    guide();
    while(scanf("%d", &choice) && choice != 5){
        switch (choice){
        case 1: constituent = CONSTITUENTS_1;
            break;
        case 2: constituent = CONSTITUENTS_2;
            break;
        case 3: constituent = CONSTITUENTS_3;
            break;
        case 4: constituent = CONSTITUENTS_4;
        }
        base_down = constituent * OVER_WORK_LIMIT;
        printf("Please enter ur work hour a week:");
        scanf("%d", &week_hour);
        salary = (week_hour > OVER_WORK_LIMIT) ? base_down + OVER_WORK_RATE * constituent * (week_hour - OVER_WORK_LIMIT) :  constituent * week_hour;
        if (salary <= FIRST_LIMIT){
            tax = salary * FIRST_RATE;}
        else if (salary <= SECOND_LIMIT){
            tax = BASE_ONE + SECOND_RATE * (salary - FIRST_LIMIT);}
        else
            tax = BASE_TWO + THIRD_RATE * (salary - SECOND_LIMIT);
        net_income = salary - tax;
        printf("Ur original salary is %.2f, tax is %.2f and net income is %.2f\n", salary, tax, net_income);
        printf("\n");
        guide();
    }
    printf("Bye!");

    getchar();
    getchar();
    return 0;
}

void guide(){
    printf("****************************************************************\n");
    printf("\n");
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("1) $8.75/hr                 2)$9.33/hr\n");
    printf("3) $10.00/hr                4)$11.20/hr\n");
    printf("5) quit\n");
    printf("****************************************************************\n");
}