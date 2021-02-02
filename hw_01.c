#include<stdio.h>

int main() {
    int money, amount;
    printf("ใช้จำนวนเงิน : ");
    scanf("%d", &money);
    while ((money > 20000 || (money%100 != 0))) {
        printf("กรุณาใช้จำนวนเงินให้ถูกต้อง : ");
        scanf("%d, &money");
    }
    printf("\nTotal bank note\n");
    if (money/1000!=0){
        amount = money/1000;
        money = money%1000;
        printf("ธนบัตรใบละ 1000 : จำนวน %d ใบ\n", amount);
    }
    if (money/500!=0){
        amount = money/500;
        money = money%500;
        printf("ธนบัตรใบละ 500 : จำนวน %d ใบ\n", amount);
    }
    if (money/100!=0){
        amount = money/100;
        money = money%100;
        printf("ธนบัตรใบละ 100 : จำนวน %d ใบ\n", amount);
    }
    return 0;       
    
}