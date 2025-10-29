#include <stdio.h>
#include "greatest_common_divisor.h"

// 目标追溯函数：计算两个数的最大公约数
long compute_gcd(long a, long b) {
    // 添加输入验证
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // 错误处理：检查零值
    if (a == 0 && b == 0) {
        return 1; // 约定：gcd(0,0) = 1
    }
    
    // 算法优化：使用迭代而非递归，避免栈溢出
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}
