#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a=='1' || a=='3'||a=='5'||a=='7'||a=='9'||a=='11'){
        printf("31");

    }
    else if(a=='2'){
        printf("28");
    }
    else{
        printf("30");
    }
}