#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 

int main() {
    int t;
    scanf("%d", &t);
    int check = isPrime(num);
    while (1) {
        if (check) {
            printf("%d is a prime number.\n", num);
            break;
        } else {
            printf("%d is not a prime number.\n", num);
            break;
        }
    }
    return 0;
}
