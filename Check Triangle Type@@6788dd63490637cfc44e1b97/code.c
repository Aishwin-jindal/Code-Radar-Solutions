#include<stdio.h>
int main(){
    int a,b,c;
    scanf(%d %d %d, &a, &b, &c);
    if(a==b==c){
        prinft("Equilateral");
    }
    else if((a==b)!=c){
        printf("Isosceles");
    }
    else(a!=b!=c){
        printf("Scalene");
    }
}