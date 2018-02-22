#include<stdio.h>

typedef struct{
int a, b, c;
}Trojkat;

void f(Trojkat troj1, Trojkat *troj2){
Trojkat troj1=Trojkat &troj2;
    return troj2;
}
int main(){
    
