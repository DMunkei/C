#include <stdio.h>

int getPruefsumme(int x){
    x += 2;
    x *= 17;
    return x%127;

}


int main2(){

    printf("%d",getPruefsumme(8));

    return 0;
}


