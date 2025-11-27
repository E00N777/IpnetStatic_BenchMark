class Base {
public:
    virtual void sayHello() {}
};

class Derived : public Base {
public:
    void sayHello() override {}
};

int main() {
    Base* obj = new Derived();
    delete obj;

    // UAF: 访问虚函数表
    obj->sayHello(); 
    
    return 0;
}