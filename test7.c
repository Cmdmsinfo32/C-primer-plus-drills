// test7 -- 第七题
#include<stdio.h>
#define CONSTITUENTS 10.00
#define OVER_WORK_LIMIT 40
#define OVER_WORK_RATE 1.5
#define FIRST_LIMIT 300
#define SECOND_LIMIT 450
#define FIRST_RATE 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25
#define BASE_ONE FIRST_RATE * FIRST_LIMIT;
#define BASE_TWO BASE_ONE + SECOND_RATE * (SECOND_LIMIT - FIRST_LIMIT)
#define BASE_DOWN CONSTITUENTS * OVER_WORK_LIMIT
int main(){
    int week_hour;
    double salary;
    double tax;
    double net_income;

    printf("Please enter ur work hour a week:");
    scanf("%d", &week_hour);
    salary = (week_hour > OVER_WORK_LIMIT) ? \
    BASE_DOWN + OVER_WORK_RATE * CONSTITUENTS * (week_hour - OVER_WORK_LIMIT) : CONSTITUENTS * week_hour;
    if (salary <= FIRST_LIMIT){
        tax = salary * FIRST_RATE;
    }  
    else if (salary <= SECOND_LIMIT){
        tax = BASE_ONE + SECOND_RATE * (salary - FIRST_LIMIT);
    }  
    else {
        tax = BASE_TWO + THIRD_RATE * (salary - SECOND_LIMIT);
    }
    net_income = salary - tax;
    printf("Ur original salary is %.2f, tax is %.2f and net income is %.2f\n", salary, tax, net_income);

    getchar();
    getchar();
    return 0;
}