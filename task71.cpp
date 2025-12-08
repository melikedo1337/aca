#include <iostream>

template<int N>
int Fibo() {
    return Fibo<N-1>() + Fibo<N-2>();
}

template<>
int Fibo<1>() {
    return 1;
}

template<>
int Fibo<0>() {
    return 0;
}

int main() {
    std::cout << Fibo<10>() << "\n";
    std::cout << Fibo<20>() << "\n";
}
