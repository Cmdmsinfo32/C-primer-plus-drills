#include <stdio.h>
#define MONTHS 12
#define YRS 5
void calc_1();
void calc_2();

const float rain[YRS][MONTHS] = {
    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
};
 // define row pointer (array type)
// pr = rain <==> pr = &rain[0] <==> (pr == rain == &rain[0])
// *pr == *rain == *(&rain[0]) == rain[0] == &rain[0][0]

int main(void){

    calc_1();

    getchar();
    return 0;
}

void calc_1(){
    int year, month;
    float total;
    for (year = 0; year < YRS; year++){
        for (total = 0, month = 0; month < MONTHS; month++)
            total += rain[year][month]; // total += *(*(rain + year) + month);
        printf("%5d is %.2f\n", 2010 + year, total);
    }
    for (month = 0; month < MONTHS; month++){
        for (total = 0, year = 0; year < YRS; year++)
            total += rain[year][month];
        printf("%d = %.2f\n", month + 1, total / YRS); // start from January
    }
}

void calc_2(){
    const float(*pr)[MONTHS] = rain; // define row pointer (array type) also called external pointer
    const float *pc; // define column pointer (float type) also called internal pointer
    float total;
    // const float(*yearMax)[MONTHS] = rain + YRS;
    while (pr < rain + YRS){ // pr < yearMax;
        total = 0;
        pc = *rain; // reset
        // const float *monthMax = *rain + MONTHS;
        while (pc < *rain + MONTHS){ // pc < monthMax;
            total += *(*pr + (pc - *rain));
            pc++;
        }
        printf("%5d is %.2f\n", 2010 + (pr - rain), total);
        pr++;
    }
    pr = rain; // reset pointer
    pc = *pr;
    while (pc < *rain + MONTHS){
        total = 0;
        pr = rain; // reset
        while (pr < rain + YRS){
            total += *(*pr + (pc - *rain));
            pr++;
        }
        printf("%d = %.2f\n", pc - *rain + 1, total / YRS); // start from January
        pc++;
    }
}
// 由此看来，使用数组表示法对元素进行操作时，最好使用for循环，当传入了数组的尾指针的时候，最好使用指针表示法用while循环，此时可以少定义几个循环用的变量，其实在对元素进行操作的时候，最好使用数组表示法，这样的元素表示更为清晰。
