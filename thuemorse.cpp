#include<iostream>

int main(int argc, char *argv[]) {
    std::uint32_t n = 1000, i = 0;
   
    int gap = 0; 
    while (i < n) {
        if (__builtin_parity(i)) {
            gap++;
        } else {
            // std::cout << gap;
            gap = 0;
        }
        std::cout << __builtin_parity(i);
        i++;
    }
    std::cout << std::endl;
    return 0;
}
