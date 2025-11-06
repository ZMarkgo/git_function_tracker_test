#include <stdio.h>

//稍微复杂点的函数
int complex_function(int x) {
    if (x < 0) {
        return -1;
    } else if (x == 0) {
        return 0;
    } else {
        return x * x + 2 * x + 1;
    }
}