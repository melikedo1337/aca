#include "zoo.h"
#include "dog.h"
#include "cat.h"

int main() {
    Zoo z(10);

    z.add(new Dog());
    z.add(new Cat());
    z.add(new Animal());

    z.makeVoices();

    return 0;
}
