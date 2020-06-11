#include <stdio.h>

int add(int a, int b){

    int sum;

    sum = a+b;
    return (sum);
};

int subtract(int a, int b){
    int result;

    result = a-b;
    return result;
}

int multiply(int a, int b){
    int result;

    result = a*b;
    return result;
}

double divide(double a, double b){
    double result = a/b;

    return result;
}

int roundz(float number){

    

    return number >= 0 ? (int)(number + 0.5) : (int)(number - 0.5);
}

int max(int a, int b, int c){
    int max = a;

    if(b>c){
        if(max>b){
            return max;
        }
        else{
            return b;
        }
    }
    return max>c? max:c;
}
int min(int a, int b, int c){
    int min = a;

    if(b<c){
        if(min<b){
            return min;
        }
        else{
            return b;
        }
    }
    return min<c? min:c;
}

int GDC(int a, int b){

    int gdc = 1;
    int topLimit = (a>b)?a:b;
    int counter = 1;
    while(counter <= topLimit){
        if((a%counter == 0) && (b%counter == 0)){
            gdc = counter;
        }
        counter++;
    }
    return gdc;
}


int isPrime(int p){
    for(int i=2; i<= p-1; i++){
        if((GDC(i,p) != 1)){return 0;}    
    }
    return 1;
}



int main(int argc, char **argv) {
    printf("UEBUNG 1\n");
    int x = add(3,2);
    int x2 = subtract(3,2);
    int x3 = multiply(3,2);
    int x4 = divide(3,2);
    int x5 = roundz(4.4);
    printf("3 + 2: %d\n",x);
    printf("3 - 2: %d\n", x2);
    printf("3 * 2: %d\n", x3);
    printf("3 / 2: %d\n", x4);
    printf("4.4: %d\n", x5);
    x5 = roundz(3.9);
    printf("3.9: %d\n", x5);
    x5 = roundz(3.5);
    printf("3.5: %d\n", x5);
    x5 = roundz(3.4);
    printf("3.4: %d\n", x5);
    //printf("a - b: %d", subtract(3,2)); why does this not work?
    //printf("a - b: %f", subtract(3,2)); why does this not work?
    
    printf("%d\n", max(-3,2,1));
    printf("%d\n", min(-3,-6,1));
    int gdc = GDC(2,17);
    printf("%d\n", gdc);


    printf("%d",isPrime(21));

    int firstPrime = 2;

    for (int i = 3; i < 500; i++)
    {
        isPrime(17);
    }
    


    return 0;
};

