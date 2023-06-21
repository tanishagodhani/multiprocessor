#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}
    
    Distance operator+(const Distance& d) {
        int f = feet + d.feet;
        int i = inches + d.inches;
        if (i >= 12) {
            f++;
            i -= 12;
        }
        return Distance(f, i);
    }
    
    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

int main() {
    Distance d1(5, 10);
    Distance d2(3, 6);
    Distance d3 = d1 + d2;
    
    d1.display();
    d2.display();
    d3.display();
    
    return 0;
}
