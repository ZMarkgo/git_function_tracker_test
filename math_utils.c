#include <stdio.h>
#include <math.h>
#include "math_utils.h"

// 计算两个数的最小公倍数
int calculate_lcm(int a, int b) {
    return (a * b) / (int)compute_gcd(a, b);
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

// 目标追溯函数：计算两个数的最大公约数
long compute_gcd(long a, long b) {
    // 添加输入验证
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // 性能优化：确保a >= b
    if (a < b) {
        long temp = a;
        a = b;
        b = temp;
    }
    
    if (b == 0) {
        return a;
    }
    return compute_gcd(b, a % b);
}