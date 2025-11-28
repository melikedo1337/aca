#include <iostream>

class A {
private:
    static int count;
public:
    A(){
    count++; 
    }
    static int getCount(){
        return count;
    }
};

int A::count = 0;

int main() {
    A x;
    A y;
    A z;

    std::cout << A::getCount() << std::endl;
}