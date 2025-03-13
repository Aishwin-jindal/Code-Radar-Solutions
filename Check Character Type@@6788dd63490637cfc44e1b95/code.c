#include <stdio.h>
int main(){
    if(ch==a || ch==e || ch==i || ch==o || ch==u){
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
