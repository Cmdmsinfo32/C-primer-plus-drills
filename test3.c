#include<stdio.h>
#include<ctype.h>
int main(){
    int ch;
    int upper;
    int lower;

    upper = lower = 0;
    while((ch = getchar()) != EOF){
        if(islower(ch))
            lower++;
        if(isupper(ch))
            upper++;
    }
    printf("This text has %d upper characters and %d lower characters.", upper, lower);

    getchar();
    return 0;
}