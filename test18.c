// test18 -- 第十八题
#include<stdio.h>
#define DOUBLE 2
#define FRIEND 5
#define Dunbar_number 150
int main(){
    int friend;
    int week;

    friend = FRIEND;
    week = 1;
    while(friend < Dunbar_number){
        friend -= week;
        friend *= DOUBLE;
        printf("Week %d, U have %d friends.\n", week++, friend);
    }
    
    getchar();
    return 0;
}