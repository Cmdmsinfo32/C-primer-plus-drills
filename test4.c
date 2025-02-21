#include<stdio.h>
int main(){
    int ch;
    double words_sum;
    double characters_sum;
    int inWord;
    int preInWord;

    words_sum = 0;
    characters_sum = 0;
    preInWord = 0;
    inWord = 0;
    while((ch = getchar()) != EOF){
        if(ch == ' ' || ch == '\n')
            inWord = 0;
        else{
            inWord = 1;
            characters_sum++;
        }
        if (!inWord && preInWord)
            words_sum++;
        preInWord = inWord;
    }
    printf("%.2f\n", characters_sum / words_sum);

    getchar();
    return 0;
}