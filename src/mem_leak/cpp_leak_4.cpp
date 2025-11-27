// 工厂函数
int* createWidget() {
    return new int(999);
}

int main() {
    int* widget = createWidget();

    // 使用了对象
    if (*widget > 0) {
        // ...
    }

    // 忘记 delete widget
    // CSA 报告: Potential memory leak
    return 0;
}