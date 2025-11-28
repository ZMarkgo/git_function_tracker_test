#include <stdio.h>

int _is_prime(int n){
// test 
    if (n <= 1) return 0;
#ifdef STRICT_CHECK
    printf("Checking primality for: %d\n", n);
#endif
    if (n <= 3) 
        return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// 判断是否为质数
int is_prime(int n) //test command
{ 
    return _is_prime(n);
}

//函数体和注释同时发生变化
int calculate(int x, int y) {
    // 计算两个数的乘积加上它们的和
    int product = x * y;
    int sum = x + y;
    int condition = (x > y) ? 1 : 0;
    if (condition)
    {
        return product + sum;
    }
    else
    {
        return product - sum;       
    }
    
}


#ifndef ENABLE_ADVANCED_MATH
double advanced_calculation(double x) {
    // 基础数学计算
    return x * x;
}
#else
double advanced_calculation(double x) {
    // 进行一些复杂的数学计算
    return sqrt(x) + log(x);
}
#endif

//新增一个结构体(不要type定义)
struct MathResult {
    int result;
    int is_prime;
};

#ifdef M
void function_A() {
    printf("Function A is enabled.\n");
}
#elif defined(MM)
void function_A() {
    printf("Function B is enabled.\n");
}
#else
void function_A() {
    
}
#endif

void funcA(){
    int a = 10;
    int b = 20;
    int sum = a + b;
    printf("Sum: %d\n", sum);
}








