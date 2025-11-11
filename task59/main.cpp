#include "animal.h"

int main() {
    Dog d("vardan", 3, 20.5);
    Cat c("pisik", 2, 5.0);
    Bird b("citik", 1, 0.3);
    Fish f("nemo", 1, 0.2);
    Lion l("simba", 5, 180.0);
    Elephant e("dumbo", 8, 6000.0);

    d.print();
    std::cout << std::endl;
    d.bark();
    c.print();
    std::cout << std::endl;
    c.meow();
    b.print();
    std::cout << std::endl;
    b.fly();
    f.print();
    std::cout << std::endl;
    f.swim();
    l.print();
    std::cout << std::endl;
    l.roar();
    e.print();
    std::cout << std::endl;
    e.sound();

    return 0;
}
