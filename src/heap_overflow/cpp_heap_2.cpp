int main() {
    // 只分配了一个 int 的堆空间
    int* p = new int(10);

    // CSA 检测：试图访问 p 之后的内存
    // p[1] 相当于 *(p + 1)，这在堆上属于未分配区域（或下一个块）
    // 报告: Out of bound memory access
    p[1] = 20; 

    delete p;
    return 0;
}