// benchmark_02.cpp
int main() {
    int a = 100000;
    int b = 100000;
    
    // 漏洞点：100,000 * 100,000 = 10,000,000,000
    // 这超出了 32位 signed int 的范围 (约 21亿)
    int result = a * b;

    return result > 0 ? 0 : 1;
}