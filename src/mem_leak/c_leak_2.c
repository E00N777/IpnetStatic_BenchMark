#include <stdlib.h>

int main(int argc, char **argv) {
    char *buf = (char *)malloc(100);
    if (!buf) return 1;

    if (argc < 2) {
        // 这里的路径导致泄漏
        // CSA 报告: Potential leak of memory
        return -1; 
    }

    free(buf); // 只有正常路径释放了
    return 0;
}