// cpp_heap_5.cpp
// 场景：最纯粹的 Off-by-one 越界
// 去掉了结构体，只用 int，避免内存对齐或 padding 对分析器的干扰
int main() {
    // 1. 在堆上只分配了 1 个 int
    int* ptr = new int[1];

    // 2. 访问索引 1
    // 有效索引只有 0。
    // 索引 1 对应的地址偏移是 sizeof(int)，正好在分配的内存块之外。
    // CSA 报告: Out of bound memory access (Heap Overflow)
    ptr[1] = 999; 

    delete[] ptr;
    return 0;
}