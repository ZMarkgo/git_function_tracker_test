#include <stdio.h>

void process_data(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}

int add(int x, int y) {
    return x + y;
}


int is_prime(int n) 
{ 
    return _is_prime(n);
}

int new_function(int x){
    return x*x;
}

#ifdef M
void funcA(){
    int a = 5;
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum += i;
    }
    printf("Macro M is defined. Sum = %d\n", sum);
}
#else
void funcA(){
    int b = 3;
    int product = 1;
    for(int i = 1; i <= b; i++){
        product *= i;
    }
    printf("Macro M is not defined. Product = %d\n", product);
}
#endif

