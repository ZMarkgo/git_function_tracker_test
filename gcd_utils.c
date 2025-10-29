#include <stdio.h>
#include "gcd_utils.h"

// 目标追溯函数：计算两个数的最大公约数
long compute_gcd(long a, long b) {
    // 添加输入验证
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // 错误处理：检查零值
    if (a == 0 && b == 0) {
        return 1; // 约定：gcd(0,0) = 1
    }
    
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
