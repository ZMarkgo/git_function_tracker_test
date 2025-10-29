#include <stdio.h>
#include "advanced_math.h"

// 目标追溯函数：计算两个数的最大公约数（高级版本）
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
    
    // 二进制GCD算法优化（Stein算法）
    int shift = 0;
    
    // 移除公共因子2
    while (((a | b) & 1) == 0) {
        a >>= 1;
        b >>= 1;
        shift++;
    }
    
    // 移除a中的因子2
    while ((a & 1) == 0) {
        a >>= 1;
    }
    
    // 主循环
    do {
        // 移除b中的因子2
        while ((b & 1) == 0) {
            b >>= 1;
        }
        
        // 确保a <= b
        if (a > b) {
            long temp = a;
            a = b;
            b = temp;
        }
        
        b = b - a;
    } while (b != 0);
    
    // 恢复公共因子2
    return a << shift;
}