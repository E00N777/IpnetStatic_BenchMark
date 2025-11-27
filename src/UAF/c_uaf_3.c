#include <stdlib.h>

int main(int argc, char **argv) {
    char *buf = (char *)malloc(100);
    if (!buf) return 1;

    if (argc > 1) {
        free(buf);
    }

    // 如果 argc > 1，这里就是 UAF
    // CSA 会报告: "Use of memory after it is freed"
    buf[0] = 'a'; 

    // 注意：如果 argc <= 1，这里会导致内存泄漏，CSA 可能也会报泄漏
    if (argc <= 1) free(buf);
    
    return 0;
}