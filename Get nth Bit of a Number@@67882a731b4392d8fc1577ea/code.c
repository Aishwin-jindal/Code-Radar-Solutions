#include <stdio.h>
int main(){
    int num,a;
    scnaf("%d %d ", &num, &a);
    printf("%d\n", (num>>a)%1);
}