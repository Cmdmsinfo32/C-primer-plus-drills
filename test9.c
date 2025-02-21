// test9 -- 第九题
#include<stdio.h>
void Temperatures(double F);
int main(){
    double F;
    int status;

    printf("Please enter a temperature in Fahrenheit scale:");
    while ((status = scanf("%lf", &F)) && F > 0) {
    /*也可以 while(scanf("%lf",&F)==1) 
    或者 status=scanf("%lf",&F); while(status==1){...;status=scanf("%lf",&F)}*/
        Temperatures(F);
        printf("Please enter a temperature in Fahrenheit scale(alphabet to quit):");
    }
    printf("Bye!\n");

    if(!status)
        getchar();
    getchar();
    getchar();
    return 0;
}

void Temperatures(double F){
    const double F_to_C = 5. / 9.;
    double C;
    double K;

    C = F_to_C * (F - 32.0);
    K = C + 273.16;
    printf("The temperatures in Fahrenheit scale is %.2f.\n", F);
    printf("The temperatures in Centigrade scale is %.2f.\n", C);
    printf("The temperatures in Kelvin scale is %.2f.\n\n", K);
}