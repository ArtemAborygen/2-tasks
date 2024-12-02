#include <iostream>
#include <iomanip>


int main() {
    double a;

    std::cout << "Введіть оцінку: ";
    std::cin >> a;

    if (a>=0.0 && a<=9.0) {
        if (a>=0.0 && a<=4.4) {
            std::cout << "Незадовільна оцінка (2.0)" << std::endl;

        } else if (a>=4.5 && a<=5.2) {
            std::cout << "Задовільний (3.0)" << std::endl;

        } else if (a>=5.3 && a<=6.2) {
            std::cout << "Оцінка вище задовільно (3.5)" << std::endl;

        } else if (a>=6.3 && a<=7.2) {
            std::cout << "Хороша оцінка (4.0)" << std::endl;

        } else if (a>=7.3 && a<=8.2) {
            std::cout << "Оцінка вище добре (4.5)" << std::endl;

        } else if (a>=8.3 && a<=9.0) {
            std::cout << "Дуже добре (5.0)" << std::endl;
        }
    }
}
