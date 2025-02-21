#include <stdio.h>
void showMenu();
int choice(int, int);
int main()
{
    showMenu();
    while (choice(1, 4) != 4)
    {
        printf("go!\n");
        showMenu();
    } 
    printf("Bye!");

    getchar();
    getchar();
    return 0;
}
void showMenu()
{
    printf("Please choose one of the following:\n");
    printf("1)copy files    2)move files\n");
    printf("3)remove files  4)quit\n");
    printf("enter the number of ur choice:\n");
}
int choice(int down, int up)
{
    int status;
    int choice;
    while ((status = scanf("%d", &choice)) != 1 || (choice < down) || (choice > up)){
        if (status != 1){
            choice = 4;
            break;
        }
        printf("please enter a integer over 0 and without over 5:\n");
        showMenu();
    }
    return choice;
}