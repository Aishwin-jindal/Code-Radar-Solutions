#include <stdio.h>
#include <math.h>
int main(){
    int ch;
    scanf("%c", &ch);
    if(ch="a" || ch="e" || ch="i" || ch="o" || ch="u"){
        printf("Vowel");
    }
    else if(ch>=a && ch<=z){
        printf("Consonant");
    }
    else if(ch== digits){
        printf("Digits");
    }
    else{
        printf("Special Charater");
    }
}
