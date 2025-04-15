#include <stdio.h>

int main() {
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i == 1 || i == n || j == 1 || j == k) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
