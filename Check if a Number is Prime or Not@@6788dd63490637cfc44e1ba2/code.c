#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 2; i * i <= n && n > 1; i++);
    printf("Prime", n, (n > 1 && i * i > n) ? "" : "Not Prime");
    return 0;
}