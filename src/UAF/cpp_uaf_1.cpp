class Simple {
public:
    int x;
    void setX(int val) { x = val; }
};

int main() {
    Simple* s = new Simple();
    delete s;

    // UAF: 对象已销毁，尝试访问成员函数操作成员变量
    s->setX(10); 
    
    return 0;
}