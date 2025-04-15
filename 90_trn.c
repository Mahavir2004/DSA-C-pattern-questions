#include <stdio.h>

int main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);  // Rows
    

    for (int i = 1; i <= n; i++) { // Rows
        for (int j = 1; j <= i; j++) { // Columns
            printf("* ");
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
