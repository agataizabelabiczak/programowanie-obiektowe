#include<stdio.h>

typedef struct{
int a, b, c;
}Trojkat;

int f(Trojkat t){
int suma;
suma=t.a+t.b+t.c;
return suma;
}

/*int main(){
    Trojkat t={1, 4, 8};

    printf("%d", f(t));
    return 0;
} */
