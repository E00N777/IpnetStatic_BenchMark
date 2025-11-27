int main() {
    int* ptr = new int(42);

    // 没有任何 delete 语句
    // CSA 报告: Potential leak of memory
    return 0; 
}