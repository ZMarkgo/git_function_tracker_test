#include <stdio.h>
#include <math.h>
#include "math_utils.h"
#include "mathematical_algorithms.h"

// 计算两个数的最小公倍数
int calculate_lcm(int a, int b) {
    return (a * b) / (int)gcd_calculator(a, b);
}

// 判断是否为质数
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// 计算阶乘
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}