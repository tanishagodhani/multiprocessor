#include <iostream>
#include <string>

using namespace std;

class Message {
private:
    string message;
public:
    Message(string msg = "") {
        message = msg;
    }
    void print() {
        cout << message << endl;
    }
    void print(string additionalMsg) {
        cout << message << " " << additionalMsg << endl;
    }
};

int main() {
    Message msg1("Hello World!");
    Message msg2("How are you?");
    
    msg1.print();
    msg2.print("I am Fine, thank you!");
    
    return 0;
}
