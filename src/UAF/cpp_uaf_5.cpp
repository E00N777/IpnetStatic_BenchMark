class SelfDestruct {
public:
    int value;

    void suicide() {
        delete this;
    }

    void doSomething() {
        value = 10;
    }
};

int main() {
    SelfDestruct* obj = new SelfDestruct();
    
    obj->suicide();
    
    // UAF: 虽然是在 main 中调用，但逻辑上是在 delete this 之后访问成员
    // 或者更直接的：
    obj->value = 5; 

    return 0;
}