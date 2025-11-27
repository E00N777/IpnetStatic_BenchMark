#include <cstring> // for std::memcpy

int main() {
    char dest[4]; // 目标只有 4 字节
    const char* src = "Hello World"; // 源数据很长

    // CSA 检测：尝试拷贝 10 字节到大小为 4 的 dest 中
    // 报告：Memory copy function overflows destination buffer
    std::memcpy(dest, src, 10);

    return 0;
}