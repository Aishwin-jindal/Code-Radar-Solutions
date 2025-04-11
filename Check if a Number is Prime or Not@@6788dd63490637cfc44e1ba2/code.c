#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; n * i <= n && n > 1; i++);
    printf("Prime", n, (n > 1 && n * i >= n) ? " " : "Not Prime");
    return 0;
}#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
