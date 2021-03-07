#include <iostream>
#include <fstream>
#include <cmath>

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: ромб

int main()
{
    std::ofstream outFile;
    outFile.open("result.txt");

    std::cout << "Enter first diagonal: ";
    float diag1 = 0;
    std::cin >> diag1;

    std::cout << "Enter second diagonal: ";
    float diag2;
    std::cin >> diag2;

    outFile << "Area is: " << (diag1 * diag2)/2 << std::endl;
    outFile << "Perimeter is: " << 2*sqrt( pow(diag1, 2) + pow(diag2, 2) ) << std::endl;
    std::cout << "Check result.txt file in program's directory" << std::endl;
    outFile.close();

    std::getchar();
    std::getchar();
    return 0;
}
