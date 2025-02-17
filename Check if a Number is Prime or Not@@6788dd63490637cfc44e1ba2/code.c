#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; n * i <= n && n > 1; i++);
    printf("Prime\n", n, (n > 1 && n * i >= n) ? " " : "Not Prime\n");
    return 0;
}