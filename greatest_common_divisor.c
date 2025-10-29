#include <stdio.h>
#include "greatest_common_divisor.h"

// 目标追溯函数：计算两个数的最大公约数
long gcd_calculator(long a, long b) {
    // 输入验证和标准化：确保处理正数
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // 零值错误处理：数学上gcd(0,0)未定义，这里约定返回1
    if (a == 0 && b == 0) {
        return 1; // 约定返回1
    }
    
    // 特殊情况快速返回
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    
    // 性能优化：确保a >= b，减少迭代次数
    if (a < b) {
        long temp = a;
        a = b;
        b = temp;
    }
    
    // 欧几里得算法迭代实现：gcd(a,b) = gcd(b, a mod b)
    while (b != 0) {
        long remainder = a % b;
        a = b;
        b = remainder;
    }
    
    return a; // 当b=0时，a即为最大公约数
}
