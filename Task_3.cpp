#include <iostream>
#include <cmath> 

int main() {
    double start, end, step;
    start=0;
    end=0;
    step=0;
    std::cout << "Введите начальное значение x: ";
    std::cin >> start; // Задаем исходное значение переменной
    std::cout << "Введите конечное значение x: ";
    std::cin >> end; // Задаем конечно значение переменной
    std::cout << "Введите шаг: ";
    std::cin >> step; // Задаем шаг, с которым с которым будет изменяться аргумент
    double x =0;
    double y =0;
    for (x = start; x <= end; x += step) {
        y = sin(x); // функция y = sin(x)
        std::cout << x << " | " << y << std::endl; // Выводим значения функции для каждого аргумента (x | y)
    }
    return 0;
}