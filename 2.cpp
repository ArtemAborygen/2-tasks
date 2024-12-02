#include <iomanip>
#include <iostream>


int main() {
    std::cout << "Введіть два числа: ";

    double a, b;

    std::cin >> a >> b;

    std::cout << std::setprecision(12);
    std::cout << "Сума: " << a+b << std::endl;
    std::cout << "Різниця: " << a-b << std::endl;
    std::cout << "Добуток: " << a*b << std::endl;
    std::cout << "Частка: " << a/b << std::endl;
}
