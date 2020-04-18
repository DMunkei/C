#include <stdio.h>
#include "UA2.h"
int getPruefsumme(int x){
    x += 2;
    x *= 17;
    return x%127;

}

/***
 * Add two numbers using bit operations
 * @param a
 * @param b
 * @return
 */


int subtraction(int a,int b){
    int fullByte = 128;
    
}

int add(int a,int b){

    int xorResult = a^b;
    int andResult = a&b;
    int leftshift = andResult << 1;
    int result;
    while (leftshift!= 0) {
        result = (xorResult ^ leftshift);
        andResult = xorResult & leftshift;
        leftshift = andResult << 1;
    }
    return result;
}



