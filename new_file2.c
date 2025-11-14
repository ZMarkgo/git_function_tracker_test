#include <stdio.h>
int _complex_function(int x){
    // test
    if (x < 0) {
        return -1;
    } else if (x == 0) {
        return 0;
    } else {
        return x * x + 2 * x + 1;
    }
}
//稍微复杂点的函数
int complex_function(int x) {
    return _complex_function(x);
}

//在已存在的文件中新增带else条件编译的函数
#ifdef ENABLE_ADVANCED_FEATURES
void advanced_feature() {
    printf("Advanced feature enabled!\n");
}
#endif