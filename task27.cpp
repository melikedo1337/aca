#include <iostream>

int* create_array(int n) {
    if (n <= 0) return nullptr;
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
        a[i] = i;
    return a;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int* arr = create_array(n);
    if (!arr) {
        std::cout << "Invalid size\n";
        return 0;
    }

    std::cout << "Array elements:\n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';
    std::cout << '\n';

    delete[] arr;
    return 0;
}
