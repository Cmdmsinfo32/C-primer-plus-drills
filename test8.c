//test8 -- 第八题
#include<stdio.h>
#include<math.h>

int main(){
    
    float operand_one;
    float operand_two;
    char operation;
    float getFloat();
    void guide();
    
    guide();
    while((operation = getchar()) != 'q'){
        printf("Please enter the first operand:");
        operand_one = getFloat();
        printf("Please enter the second operand:");
        operand_two = getFloat();
        printf("\n");
        switch (operation){
        case 'a':
            printf("%f + %f = %.2f\n", operand_one, operand_two, operand_one + operand_two);
            break;
        case 's':
            printf("%f - %f = %.2f\n", operand_one, operand_two, operand_one - operand_two);
            break;
        case 'm':
            printf("%f * %f = %.2f\n", operand_one, operand_two, operand_one * operand_two);
            break;
        case 'd':
            while(!operand_two){
                printf("Enter a number other than 0:");
                operand_two = getFloat();
            }
            printf("%f / %f = %.2f\n", operand_one, operand_two, operand_one / operand_two);
            break;
        default:
            printf("Program error!\n");
        }
        printf("\n");
        guide();
    }

    getchar();
    return 0;
}

float getFloat()
{
    float obj;
    char ch;

    while (scanf("%f", &obj) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
    }
    while (getchar() != '\n')
        continue;

    return obj;
}

void guide()
{
    printf("*******************************************************************\n");
    printf("Please enter a character to choose the operation u wanna implement:\n");
    printf("a. add             s. subtract\n");
    printf("m. multiply        d. divide\n");
    printf("q. quit\n");
    printf("*******************************************************************\n");
}