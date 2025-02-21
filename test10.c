// test11 -- 第十一题
#include<stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT_LIMIT 100
#define DISCOUNT 0.05
#define TRANS_ONE 6.5
#define TRANS_TWO 14
int main(){
    char choice;
    char confirm;
    int every;
    int artichoke_pound;
    int beet_pound;
    int carrot_pound;
    int pound;
    double a_price;
    double b_price;
    double c_price;
    double price;
    double total;
    double temp_price;
    double transport;
    double discount;

    artichoke_pound = beet_pound = carrot_pound = 0;
    printf("Fulfill the form to manage ur order.\n");
    printf("a for artichoke, b for beet and c for carrot.\nPlease choose the options(q to quit):");
    while((choice = getchar()) != 'q'){
        printf("Go on to input the total pound of carrots u wanna order:");
        scanf("%d", &every);
        switch (choice)
        {
        case 'a':
        case 'A':
            artichoke_pound += every;
            break;
        case 'b':
        case 'B':
            beet_pound += every;
            break;
        case 'c':
        case 'C':
            carrot_pound += every;
        }
        printf("keep Choosing the options(q to quit):");
        while(getchar() != '\n')
            continue;
    }
    a_price = ARTICHOKE * artichoke_pound;
    b_price = BEET * beet_pound;
    c_price = CARROT * carrot_pound;
    temp_price = a_price + b_price + c_price;
    pound = artichoke_pound + beet_pound + carrot_pound;
    if(temp_price >= 100)
        price = temp_price * (1 - DISCOUNT);
    if(pound <= 5)
        transport = TRANS_ONE;
    else if(pound <= 20)
        transport = TRANS_TWO;
    else
        transport = TRANS_TWO + 0.5 * (pound - 20);
    total = price + transport;
    printf("\nConfirm message\n");
    printf("*************************************************************\n");
    printf(" article      price      pound   subtotal\n");
    printf("Artichoke  $%.2f/pound    %d      %.2f\n", ARTICHOKE, artichoke_pound, a_price);
    printf("Beet       $%.2f/pound    %d      %.2f\n", BEET, beet_pound, b_price);
    printf("carrot     $%.2f/pound    %d      %.2f\n", CARROT, carrot_pound, c_price);
    printf("order price:%.2f  discount:%s  transport fees:%.2f  total:%.2f\n", temp_price, temp_price >= 100 ? "5.0" :"0.0",transport, total);
    printf("*************************************************************\n");
    printf("U ll get the things above, please check the form before u say \'y\' for yes or \'n\' for no:");
    confirm = getchar();
    switch (confirm)
    {
    case 'y':
    case 'Y':
        printf("We have receive ur order,we ll get things prepared for u.\n");
        break;
    case 'n':
    case 'N':
        printf("U deny the deal.Bye!\n");
        break;
    }
    
    getchar();
    getchar();
    return 0;
}