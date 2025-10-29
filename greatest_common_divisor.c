#include <stdio.h>
#include "greatest_common_divisor.h"

// 辅助函数：计算操作次数统计
static int operation_count = 0;

// 目标追溯函数：计算两个数的最大公约数（增强版）
long gcd_calculator(long a, long b) {
    operation_count = 0; // 重置计数器
    
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
        operation_count++; // 统计迭代次数
    }
    
    // 可选：输出操作统计信息
    if (operation_count > 0) {
        printf("GCD计算完成，迭代次数: %d\n", operation_count);
    }
    
    return a; // 当b=0时，a即为最大公约数
}