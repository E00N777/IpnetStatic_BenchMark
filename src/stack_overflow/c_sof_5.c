#include <string.h>

int main() {
    char src[20] = "AAAAAAAAAA";
    char dest[5];
    
    // CSA 检测：尝试将 20 字节复制到 5 字节的栈缓冲区
    memcpy(dest, src, sizeof(src)); 
    
    return 0;
}