#include<stdio.h>
int main(){
    int menu,x1=0, x2=0, x3=0, x4=0;
    float money = 0;
    printf("Welcome to Restaurant\n");
    do{
        printf("1. Pizza    150 B\n");
        printf("2. Hamburger 50 B\n");
        printf("3. Sandwich  25 B\n");
        printf("4. Water     10 B\n");
        printf("0. Calculate money\n");
        printf("\nSelect menu : ");
        scanf ("%d" ,&menu);
        for (int i = 0; i < 34; i++)
        printf("\n");
        switch (menu){
        case 1:
            money = money + 150; x1++;
            break;
        case 2:
            money = money + 50; x2++;
            break;
        case 3:
            money = money + 25; x3++;
            break;
        case 4:
            money = money + 10; x4++;
            break;        
        default:
            break;
        }
        printf("\n\nU have : \n");
        printf("Pizza    %d * 150 : %d\n",x1,x1*150);
        printf("Hamburger %d * 50 : %d\n",x2,x2*50);
        printf("Sandwich  %d * 25 : %d\n",x3,x3*25);
        printf("Water     %d * 10 : %d\n\n",x4,x4*10);
    }
    while (menu != 0);{
        printf("\nTotal payment = %.2f\n", money);
        return 0;
    }
    
}
