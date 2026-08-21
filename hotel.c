#include <stdio.h>
int main() {
    int n, i, j, item, count;
    float p, bill, total;
    total = 0;
    printf("________Anbu foodie stop_______\n");
    printf("\nnumber of members: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        bill = 0;
        printf("\nHow many items Member %d wants: ", i);
        scanf("%d", &count);
        for (j = 1; j <= count; j++) {
            printf("\nMENU");
            printf("1. Burger - 50\n");
            printf("2. Pizza - 120\n");
            printf("3. Noodles - 80\n");
            printf("4. Fried Rice - 90\n");
            printf("5. Cold Drink - 30\n");
            printf("Enter item number: ");
            scanf("%d", &item);
            switch (item) {
                case 1:
                p = 50;
                break;
                case 2:
                p = 120;
                break;
                case 3:
                p = 80;
                break;
                case 4:
                p = 90;
                break;
                case 5:
                p = 30;
                break;
                default:
                p = 0;
                printf("Wrong choice\n");
            }
            bill = bill + p;
        }
        printf("Member %d bill = %.2f\n", i, bill);
        total = total + bill;
    }
    printf("\nTotal group bill = %.2f\n", total);
    return 0;
}