#include <stdio.h>

//标识符重命名，且条件编译发生变化
#ifdef MACRO_TEST
int cheng(int x, int y) {
    return x * y;
}
#endif