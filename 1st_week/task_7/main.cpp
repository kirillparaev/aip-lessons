#include <iostream>

//Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа.

int main()
{
    std::cout << "Enter a number: ";

    int num;
    std::cin >> num;

    std::cout << "Square of your number: " << num * num << std::endl;
    std::cout << "Cube of your number: " << num * num * num << std::endl;
    return 0;
}
