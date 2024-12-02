#include <iostream>
#include <iomanip>


int main() {
    int a;

    std::cout << "Введіть ціле число: ";
    std::cin >> a;

    if (a%2==0) {
        std::cout << "Число парне: ТАК" << std::endl;
    } else {
        std::cout << "Число парне: НІ" << std::endl;
    }

    if (a%8==0) {
        std::cout << "Число ділиться на 8: ТАК" << std::endl;
    } else {
        std::cout << "Число ділиться на 8: НІ" << std::endl;
    }

    if (a%16==0) {
        std::cout << "Число ділиться на 16: ТАК" << std::endl;
    } else {
        std::cout << "Число ділиться на 16: НІ" << std::endl;
    }

    std::cout << "oct: " << std::oct << a << std::endl;
    std::cout << "hex: " << std::hex << a << std::endl;
}
