#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" ");
        for (int j = (n - i) / 2; j < n; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" ");
        for (int j = (n - i) / 2; j < n; j++) printf("*");
        printf("\n");
    }
    return 0;
}
