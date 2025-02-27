#include<stdio.h>
int main(){
    int ch,a,z,A,Z;
    scanf("%c", &ch);
    if(ch>>A && ch<<Z){
        printf("Uppercase");
    }
    else if(ch>>a && ch<=z){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}