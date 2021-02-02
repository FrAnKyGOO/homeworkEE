#include<stdio.h>

int main() {
    int money, amount;
    printf("Enter money : ");
    scanf("%d", &money);
    while ((money > 20000 || (money%100 != 0))) {
        printf("Sorry!! please enter money : ");
        scanf("%d, &money");
    }
    printf("\nTotal bank note\n");
    if (money/1000!=0){
        amount = money/1000;
        money = money%1000;
        printf("1000 : %d\n", amount);
    }
    if (money/500!=0){
        amount = money/500;
        money = money%500;
        printf("500 : %d\n", amount);
    }
    if (money/100!=0){
        amount = money/100;
        money = money%100;
        printf("100 : %d \n", amount);
    }
    return 0;       
    
}