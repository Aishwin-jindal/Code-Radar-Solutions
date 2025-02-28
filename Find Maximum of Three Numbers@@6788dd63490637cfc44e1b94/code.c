#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b>c){
        printf(a);
    }
    else if(a>b && a>c){
        if(b>c){
            printf(b);

        }
        else{
            printf(c);
        }
        else if(a<b && a<c){
            if(b>c){
            printf(b);

            }
            else{
                printf(c);
            }
        }
        else {
            printf(c);
        }

    }

}