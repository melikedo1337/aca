#include <iostream>
#include <cstdlib>

void* operator new(size_t size) {
    std::cout << "new called, size: " << size << std::endl;
    void* ptr = std::malloc(size);
    return ptr;
}

void operator delete(void* ptr) {
    std::cout << "delete called" << std::endl;
    std::free(ptr);
}

void* operator new[](size_t size) {
    std::cout << "new[] called, size: " << size << std::endl;
    void* ptr = std::malloc(size);
    return ptr;
}

void operator delete[](void* ptr) {
    std::cout << "delete[] called" << std::endl;
    std::free(ptr);
}

int main() {
    int* arr = new int[5];
    
    for(int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
    }
    
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    
    delete[] arr;
    
    return 0;
}
