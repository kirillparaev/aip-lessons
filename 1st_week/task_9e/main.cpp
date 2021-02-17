#include <iostream>

int main()
{
    std::cout << "Choose a measurement: " << std::endl;
    std::cout << "1) Tea spoon" << std::endl;
    std::cout << "2) Regular spoon" << std::endl;
    std::cout << "3) Glass" << std::endl;
    std::cout << "Your choice: ";

    int chosen_measurement = 0;
    std::cin >> chosen_measurement;

    switch(chosen_measurement){
        case 1:
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";
        float value;
        std::cin >> value;
        float result2;
        result2 = value / 2.75;
        std::cout << "This is " << result2 << " regular spoons" << std::endl;
        float result3;
        result3 = value / 20;
        std::cout << "This is " << result3 << " glasses" << std::endl;
        break;

        case 2:
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";
        std::cin >> value;
        float result1;
        result1 = value * 2.75;
        std::cout << "This is " << result1 << " tea spoons" << std::endl;
        result3 = value / 7.27;
        std::cout << "This is " << result3 << " glasses" << std::endl;
        break;

        case 3:
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";
        std::cin >> value;
        result1 = value * 20;
        std::cout << "This is " << result1 << " tea spoons" << std::endl;
        result2 = value * 7.27;
        std::cout << "This is " << result2 << " regular spoons" << std::endl;
        break;

        default:
        std::cout << "    " << std::endl;
        std::cout << "Wrong choice! Try again." << std::endl;
        break;

    }

    getchar();
    getchar();

    return 0;

}
