#include <iostream>
#include <iomanip>


int main() {
    int a;
    double temp;

    std::cout << "Введіть параметр;" << std::endl;
    std::cout << "1 - Цельсій в Фаренгейт" << std::endl;
    std::cout << "2 - Фаренгейт в Цельсій" << std::endl;

    std::cin >> a;

    std::cout << "Введіть температуру: ";
    std::cin >> temp;

    if (temp<-273.15) {
        std::cout << "Занадто холодно для підрахунку!" << std::endl;
        return 0;
    }

    if (a==1) {
        double fahr = (temp*9/5) + 32;
        std::cout << "Температура в Фаренгейтах: " << std::fixed << std::setprecision(2) << fahr << std::endl;

    } else if (a==2) {
        double cel = (temp-32) * 5/9;
        std::cout << "Температура в Цельсіях: " << std::fixed << std::setprecision(2) << cel << std::endl;

    } else {
        std::cout << "Помилка" << std::endl;
    }
}
