#include <iostream>
#include <cstdlib>

void* myMalloc(size_t size) {
    std::cout << "[myMalloc] Allocating " << size << " bytes" << std::endl;
    void* ptr = std::malloc(size);
    if (!ptr) std::cout << "[myMalloc] Allocation failed!" << std::endl;
    return ptr;
}

void* operator new(size_t size) {
    std::cout << "[operator new] Request for " << size << " bytes" << std::endl;
    void* p = myMalloc(size);
    return p;
}

void operator delete(void* p){
    std::cout << "[operator delete] Freeing memory" << std::endl;
    std::free(p);
}

int main() {
    char* a = new char;
    delete a;
    return 0;
}
