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

int main() {
    printf("Hello, World!\n");

    int a,b,c,d;
    a = 1;
    b=2;
    c=3;
    d=4;
    int ret;
    ret = min(a,b,c,d);
    printf("Max value is : %d\n", ret);
    ret = max(a,b,c,d);
    printf("Min value is : %d\n", ret);
    return 0;
}

