#include <stdio.h>

void process_data(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
     // ======= 以下为新增的约 100 行代码 =======
    printf("=== Start of extended processing ===\n");

    int even_sum = 0;
    int odd_sum = 0;
    int squares_sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;

        squares_sum += i * i;
    }

    printf("Even sum = %d, Odd sum = %d, Squares = %d\n", even_sum, odd_sum, squares_sum);

    // 模拟新增的 100 行逻辑（循环 + 打印 + 判断）
    for (int i = 0; i < 50; i++) {
        printf("[Line %d] Checking value %d...\n", i, i);
        if (i % 10 == 0) {
            printf("Reached multiple of 10: %d\n", i);
        }
        if (i > n / 2) {
            printf("Halfway passed: i=%d\n", i);
        }
        for (int j = 0; j < 2; j++) {
            printf("Nested loop j=%d\n", j);
        }
    }

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        if (i > max_val)
            max_val = i;
    }

    printf("Max value = %d\n", max_val);

    // 模拟额外分析逻辑
    for (int k = 0; k < 20; k++) {
        printf("Processing element #%d\n", k);
        if (k % 5 == 0) {
            printf("Special element: %d\n", k);
        }
    }

    printf("=== End of extended processing ===\n");
    // ======= 新增代码结束 =======
    printf("Sum = %d\n", sum);
}

