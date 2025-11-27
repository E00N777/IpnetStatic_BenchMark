int main() {
    double* d = new double(3.14);

    // 逻辑上不再需要 d，将其置空，但忘记了 delete
    // CSA 报告: Potential memory leak
    d = nullptr; 

    return 0;
}