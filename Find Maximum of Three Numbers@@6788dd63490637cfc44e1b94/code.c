#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b>c){
        printf("%d", &a);
    }
    else if(a>b && a>c){
        if(b>c){
            printf("%d", &b);

        }
        else{
            printf("%d",&c);
        }
        else if(a<b && a<c){
            if(b>c){
            printf("%d", &b);

            }
            else{
                printf("%d", &c);
            }
        }
        else {
            printf("%d", &c);
        }

    }

}