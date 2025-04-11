#include <stdio.h>
int main(){
    unsgined int num;
    scanf("%u", &num);
    int leading_zeros=__builtin_clz(num);
    printf("%d\n", leading_zeros);
    return 0;
}