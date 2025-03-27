#include<stdio.h>
int main(){
    int gr;
    scanf("%d", &gr);
    if(gr>=90){printf("A");}
    else if(gr>=80){printf("B");}
    else if(gr>=70){printf("C");}
    else if(gr>=60){
        printf("D");
    }
    else{
        printf("F");
    }
}