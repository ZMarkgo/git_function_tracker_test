#include <stdio.h>
#include "math_utils.h"
#include "string_utils.h"
#include "array_utils.h"
#include "greatest_common_divisor.h"

int main() {
    printf("测试数学工具函数\n");
    printf("GCD(48, 18) = %ld\n", gcd_calculator(48, 18));
    printf("LCM(12, 15) = %d\n", calculate_lcm(12, 15));
    printf("Is 17 prime? %s\n", is_prime(17) ? "Yes" : "No");
    printf("5! = %lld\n", factorial(5));
    
    printf("\n测试字符串工具函数\n");
    char test_str[] = "Hello World";
    printf("String length: %d\n", string_length(test_str));
    
    printf("\n测试数组工具函数\n");
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Max value: %d\n", find_max(arr, n));
    printf("Min value: %d\n", find_min(arr, n));
    printf("Average: %.2f\n", calculate_average(arr, n));
    
    return 0;
}
