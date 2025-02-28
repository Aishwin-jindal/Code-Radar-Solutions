#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n%5==0 ||n%5>0|| n%5==1){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }


}