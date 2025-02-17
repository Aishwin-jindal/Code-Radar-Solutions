#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 2; i * i <= n && n > 1; i++);
    printf("%d is %sprime.\n", n, (n > 1 && i * i > n) ? "Prime" : "Not Prime");
    return 0;
}