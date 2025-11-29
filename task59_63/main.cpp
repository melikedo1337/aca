#include "animal.h"

int main() {
    Dog d1("Vardan", 3, 20.5);
    Dog d2("Jeko", 2, 25.0);

    Cat c1("Pisik", 4, 15.0);
    Cat c2("Tom", 5, 18.0);

    Bird b1("Clvlik", 1, 2.5);
    Bird b2("Shvshvik", 2, 3.0);

    Fish f1("Hasarak Ishxan", 1, 1.0);
    Fish f2("SEVANIII Ishxan", 2, 1.5);

    Lion l1("Simba", 5, 190.0);
    Lion l2("Mufasa", 8, 200.0);

    Elephant e1("Dumbo", 10, 500.0);
    Elephant e2("Parsik", 12, 520.0);

    d1.print();
    d2.print();
    c1.print();
    c2.print();
    b1.print();
    b2.print();
    f1.print();
    f2.print();
    l1.print();
    l2.print();
    e1.print();
    e2.print();

    if(d1 < d2) std::cout << d1.getName() << " is lighter than " << d2.getName() << "\n";
    if(c2 > c1) std::cout << c2.getName() << " is heavier than " << c1.getName() << "\n";
    if(b1 == b2) std::cout << b1.getName() << " has the same weight as " << b2.getName() << "\n";
    if(f1 < f2) std::cout << f1.getName() << " is lighter than " << f2.getName() << "\n";
    if(l1 < l2) std::cout << l1.getName() << " is lighter than " << l2.getName() << "\n";
    if(e2 > e1) std::cout << e2.getName() << " is heavier than " << e1.getName() << "\n";

    d1.bark();
    c1.meow();
    b1.fly();
    f1.swim();
    l1.roar();
    e1.sound();

    return 0;
}
