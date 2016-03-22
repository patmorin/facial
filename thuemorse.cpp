/*
    gcc -Wall -std=c++11 thuemorse.cpp -o thuemorse
 */
#include<iostream>

// Print the first n bits of the Prouhet-Thue-Morse string
void thue_morse(std::uint32_t n) {
    for (std::uint32_t i = 0; i < n; i++)
        std::cout << __builtin_parity(i);
    std::cout << std::endl;
}

// Print the first n characters of Thue's non-repetitive string
void non_repetitive(std::uint32_t n) {
    std::uint32_t i = 1;
    for (std::uint32_t j = 0; j < n; j++) {
        int gap = 0;
        while (__builtin_parity(i++)) gap++;
        std::cout << gap;
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
   std::uint32_t n = 100;
   thue_morse(n);
   non_repetitive(n);
}
