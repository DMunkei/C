#include <stdio.h>

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
        printf("The Value of size: %d\n", size << 1);
        size++;
    }
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

int main() {
    printf("Hello, World!\n");

 /*   int a,b,c,d;
    a = 1;
    b=2;
    c=3;
    d=4;
    int ret;
    ret = min(a,b,c,d);
    printf("Max value is : %d\n", ret);
    ret = max(a,b,c,d);
    printf("Min value is : %d\n", ret);
    for (int i = 1; i <= 6; ++i) {
        ret = arith(6,3,i);
        printf("Result value is : %d\n", ret);
    }*/
    //sizeOfInt();
    geradeZahlen();
    return 0;
}

