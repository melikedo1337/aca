#include <iostream>
#include "myList.h"

int main() {
    List<int> a;

    a.push_back(10);
    a.push_back(20);
    a.push_front(5);
    a.insert(1, 7);

    a.print();

    std::cout << a.front() << std::endl;
    std::cout << a.back() << std::endl;
    std::cout << a.at(2) << std::endl;

    std::cout << a.contains(20) << std::endl;
    std::cout << a.indexOf(7) << std::endl;

    List<int> b = a;
    b.push_back(100);
    b.print();

    List<int> c;
    c = a;
    c.print();

    a.clear();
    std::cout << a.empty() << std::endl;

    return 0;
}
