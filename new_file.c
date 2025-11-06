#include <stdio.h>

// 判断是否为质数
int is_prime(int n) //test command
{ 
+    // test 
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