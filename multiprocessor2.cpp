#include <iostream>

using namespace std;

class MyClass {
public:
    void func0() {
        cout << "This is function with 0 arguments." << endl;
    }
    void func1(int arg1) {
        cout << "This is function with 1 argument: " << arg1 << endl;
    }
    void func2(int arg1, int arg2) {
        cout << "This is function with 2 arguments: " << arg1 << " and " << arg2 << endl;
    }
    void func3(int arg1, int arg2, int arg3) {
        cout << "This is function with 3 arguments: " << arg1 << ", " << arg2 << ", and " << arg3 << endl;
    }
    void funcAll(int arg1 = 0, int arg2 = 0, int arg3 = 0) {
        cout << "This is function with all arguments defaulted: " << arg1 << ", " << arg2 << ", and " << arg3 << endl;
    }
};

int main() {
    MyClass obj;
    
    obj.func0();
    obj.func1(1);
    obj.func2(2, 3);
    obj.func3(4, 5, 6);
    obj.funcAll();
    
    return 0;
}
