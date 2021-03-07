#include <iostream>
#include <fstream>

//Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа.

int main()
{
    std::cout << "Enter a number: ";

    int num;
    std::cin >> num;

    std::ofstream outFile;
    outFile.open("result.txt");

    outFile << "Square of your number: " << num * num << std::endl;
    outFile << "Cube of your number: " << num * num * num << std::endl;

    std::cout << "Check result.txt file in program's directory" << std::endl;

    outFile.close();
    return 0;
}
