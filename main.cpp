#include <iostream>
#include <fstream>

template<size_t w>
struct faktorial {
    static const int value = w * faktorial<w-1>::value;
};
template<>
struct faktorial<0> {
    static const int value = 1;
};
template<size_t x>struct faktorial_is;

int main() {
    faktorial_is<faktorial<10>::value>zxc;
    std::cout << faktorial<10>::value << std::endl;
    return 0;
}