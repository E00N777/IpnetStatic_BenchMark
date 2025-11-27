#include <string.h>

int main() {
    char buf[10] = "Hello"; // 占用 6 字节
    char *append = "World!"; // 7 字节
    
    // CSA 检测：拼接后总长度超过 10 字节，导致栈溢出
    strcat(buf, append); 
    
    return 0;
}