// test7 -- 第七题
#include<stdio.h>
#include<string.h>
#define SIZE 26
int main(){
    char word[SIZE];
    int index;

    scanf("%s", word);
    index = strlen(word);
    while(index-- > 0)
        printf("%c", word[index]);//<==> while(index > 0)  printf("%c",word[--index])
    
    getchar();
    getchar();
    return 0;
}