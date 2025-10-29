#include <stdio.h>
#include <string.h>
#include "string_utils.h"

// 计算字符串长度（优化版）
int string_length(const char* str) {
    if (str == NULL) return 0; // 添加空指针检查
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// 字符串反转
void reverse_string(char* str) {
    int len = string_length(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// 字符串比较
int compare_strings(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

// 查找子字符串
char* find_substring(const char* haystack, const char* needle) {
    if (!*needle) return (char*)haystack;
    
    for (const char* p = haystack; *p; p++) {
        const char* p1 = p;
        const char* p2 = needle;
        
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        
        if (!*p2) return (char*)p;
    }
    return NULL;
}
