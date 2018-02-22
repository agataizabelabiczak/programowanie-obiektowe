#include<stdio.h>

typedef struct{
int a, b, c;
}Trojkat;

void f(Trojkat troj1, Trojkat *troj2){
Trojkat troj1=Trojkat &troj2;
}
/*int main(){
    Trojkat troj1={1, 4, 8};
    Trojkat troj2;
    f(troj1, troj2);
    printf("%d", &troj2);
    return 0;
} */
    
