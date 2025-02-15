#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d  %d  %d \n", &a, &b, &c);
    if(a==b && b==c && a==c){
        prinft("Equilateral  ");
    }else if((a==b && b!=c) ||(a!=b && b==c)){
        printf("Isosceles  ");
    }else{
        printf("Scalene  ");
    }
    return 0;
}