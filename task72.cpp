#include <iostream>

void print() {};

template <typename Arg, typename... Args>
void print(Arg arg, Args... args){
    std::cout << arg << std::endl;
    print(args...);
}

int main()
{
    print(1, 2.3, 4.567, "eight nine ", "ten ", 'e', 'l', 'e', 'v', 'e', 'n', "\n");

    return 0;
}