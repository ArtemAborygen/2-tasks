#include <iostream>
#include <iomanip>


int main() {
    char symbol;

    std::cout << "Введіть символ: ";
    std::cin >> symbol;

    std::cout << "Введений символ: " << symbol << std::endl;
    std::cout << "ASCII код (десятковий): " << (int)symbol << std::endl;
    std::cout << "ASCII код (шістнадцятковий): " << std::hex << (int)symbol << std::endl;
}
