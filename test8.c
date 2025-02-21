// test 8 -- 第七题
#include<stdio.h>
void read();
int main(){
    read();
    
    getchar();
    return 0;
}

void read(){
    char ch;
    while((ch = getchar()) != EOF){
        if(ch >= 'a' && ch <= 'z')
            printf("%d", ch - 96);
        else if(ch >= 'A' && ch <= 'Z')
            printf("%d", ch - 64);
        else
            printf("-1");
    }
}