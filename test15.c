#include <stdio.h>
int main()
{
    char **argv;
    char *string[3] = {"china", "banana", "canada"};
    argv = string;
    printf("%s", *argv);

    getchar();
    return 0;
}