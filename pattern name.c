#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the row:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // A
        for (j = 1; j <= n; j++) {
            if ((i==1&&j==3) || (i==2&&(j==2||j==4)) || (i==3) || ((i==4||i==5)&&(j==1||j==5)))
                printf("❤️ ");
            else
                printf("  ");
        }
        printf(" ");

        // N
        for (j = 1; j <= n; j++) {
            if ((j==1||j==5) || (i==2&&j==2) || (i==3&&j==3) || (i==4&&j==4))
                printf("❤️ ");
            else
                printf("  ");
        }
        printf(" ");

        // B
        for (j = 1; j <= n; j++) {
            if (((i==1||i==3||i==5)&&j<=4) || ((i==2||i==4)&&(j==1||j==5)))
                printf("❤️ ");
            else
                printf("  ");
        }
        printf(" ");

        // U
        for (j = 1; j <= n; j++) {
            if ((i<=4&&(j==1||j==5)) || (i==5&&j>=2&&j<=4))
                printf("❤️ ");
            else
                printf("  ");
        }

        printf("\n");
    }
    return 0;
}