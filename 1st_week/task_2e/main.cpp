#include <iostream>
#include <cmath>

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: ромб

int main()
{
    std::cout << "Enter first diagonal: ";
    float diag1 = 0;
    std::cin >> diag1;

    std::cout << "Enter second diagonal: ";
    float diag2;
    std::cin >> diag2;

    std::cout << "Area is: " << (diag1 * diag2)/2 << std::endl;
    std::cout << "Perimeter is: " << 2*sqrt( pow(diag1, 2) + pow(diag2, 2) );

    std::getchar();
    std::getchar();
    return 0;
}
