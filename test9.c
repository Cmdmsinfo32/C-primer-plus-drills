// test9 -- 第九题
#include<stdio.h>
double getres();
int status;
int main(){
    int trash_bin;
    int i;

    getres();

    if(status < 2){
        if(!scanf("%d",&trash_bin)){
            getchar();
            getchar();
        }
        if(scanf("%d",&trash_bin)){
            printf("%d", trash_bin);
            getchar();
        }  
        else{
            getchar();
            getchar();
        }
        getchar();
    }
    return 0;
}
double getres(){
    double one, two;

    printf("Please enter two numbers to calculate the result:");
    while((status = scanf("%lf %lf",&one,&two)) == 2){
        printf("The result is %.2f\n", (two - one) / (two * one));
        printf("Please enter two numbers to calculate the result(q to quit):");
    }
    printf("Bye!\n");
}