int main() {
    // 栈上分配 5 个整数
    int buffer[5]; 

    // CSA 检测：索引 10 显然超出了范围 [0..4]
    // 报告：Out of bound memory access
    buffer[10] = 42; 

    return 0;
}