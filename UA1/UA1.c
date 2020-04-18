#include "UA1.h"
int min(int a, int b, int c, int d)
{
    int result,min1,min2;
    if(a < b)
    {
        min1 = a;
    }
    else{
        min1 = b;
    }
    if(c<d) {
        min2 =c;
    }
    else{
        min2 = d;
    }
    if (min1 < min2) {
        result=min1;
    } else {
        result=min2;
    }

    return result;
}
int max(int a, int b, int c, int d)
{
    int result,max1,max2;
    if(a > b)
    {
        max1 = a;
    }
    else{
        max1 = b;
    }
    if(c>d) {
        max2 =c;
    }
    else{
        max2 = d;
    }
    if (max1 > max2) {
        result=max1;
    } else {
        result=max2;
    }

    return result;
}
int arith(int a, int b, int flag) {
    int result;
    switch (flag){
        case 1:
            result = a+b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
        case 5:
            result = a;
            break;
        default:
            printf("Sie haben einen ungueltigen Flag uebergeben!");
            result = -1;
            break;
    }
    return result;
}
void sizeOfInt() {
    int size = 0;
    while (-1 <  size) {
        size++;
    }
    printf("The Value of size: %d\n", --size);
}
void geradeZahlen(){

    int userInput;
    printf("Zahl eingeben: ");
    scanf("%d", &userInput);
    if(userInput <0)
    {
        for (int i = 0; i >= userInput; i--)
        {
            printf("The even numbers from 0 to %d: %d\n",userInput,i);
            i--;
        }
    }
    else
    {
        for (int i = 0; i <= userInput; i++)
        {
            printf("The even numbers from 0 to %d: %d\n",userInput,i);
            i++;
        }
    }
}
void simulateLoopWithGOTO(){
    for (int i = 0; i < 10; ++i) {
        if(i == 2){
            goto CONTINUE;
        } else{
            printf("%d\n", i);
        }
        CONTINUE:;
        if(i == 5){
            goto BREAK;
        }
    }
    BREAK:;
}
void sortSourceCode() {

    goto PART1;
    PART3:;
    printf("der ");
    goto PART4;
    PART2:;
    printf("bei ");
    goto PART3;
    PART1:;
    printf("Willkommen ");
    goto PART2;
    PART5:;
    printf("Uebungseinheit ");
    goto END;
    PART4:;
    printf("vorletzten ");
    printf("Aufgabe ");
    printf("dieser ");
    goto PART5;
    END:;
}
int fibonacci(int x){
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

