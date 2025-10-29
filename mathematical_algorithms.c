#include <stdio.h>
#include "mathematical_algorithms.h"

// 目标追溯函数：计算两个数的最大公约数（企业级版本）
long gcd_calculator(long a, long b) {
    // 输入验证和标准化：确保处理正数
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // 调试信息输出
    printf("计算GCD: 输入参数 a=%ld, b=%ld\n", a, b);
    
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
    
    // 二进制GCD算法优化（Stein算法）- 增强版
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
    
    // 主循环 - 优化版本
    do {
        // 移除b中的因子2
        while ((b & 1) == 0) {
            b >>= 1;
        }
        
        // 确保a <= b，使用异或交换避免临时变量
        if (a > b) {
            a ^= b;
            b ^= a;
            a ^= b;
        }
        
        b = b - a;
    } while (b != 0);
    
    // 恢复公共因子2并确保结果为正
    long result = a << shift;
    return result > 0 ? result : -result;
}