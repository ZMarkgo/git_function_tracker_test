#include <stdio.h>

int use_sum_logic = 1; // 1使用累加逻辑，0使用阶乘逻辑

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

struct MathResult {
    int result;
    int is_prime;
};


int is_prime(int n) 
{ 
    return _is_prime(n);
}

int new_function(int x){
    return x*x;
}

void funcA(){
    if (use_sum_logic) {
        int a = 5;
        int sum = 0;
        for(int i = 0; i < a; i++){
            sum += i;
        }
        printf("Using sum logic. Sum = %d\n", sum);
    } else {
        int b = 3;
        int product = 1;
        for(int i = 1; i <= b; i++){
            product *= i;
        }
        printf("Using product logic. Product = %d\n", product);
    }
}


// 新增一个结构体(不要type定义)
struct MathResult1 {
    int result;
    int is_prime;
};

//新增一个宏
#define MIN_VALUE 100


