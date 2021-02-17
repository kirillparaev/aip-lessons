#include <iostream>

float price_of_sweets;
float price_of_cookies;
float purchase1();
float purchase2();

int main()
{
    std::cout << "Price for 1kg of sweets: ";
    std::cin >> price_of_sweets;

    std::cout << "Price for 1kg of cookies: ";
    std::cin >> price_of_cookies;

    std::cout << "------------------" << std::endl;
    std::cout << "Cost of 300g of sweets + 400g of cookies: " << purchase1() << std::endl;

    std::cout << "------------------" << std::endl;
    std::cout << "Cost of 3 purchases of 2kg of cookies + 1,8 kg of sweets: " << purchase2() << std::endl;

    getchar();
    getchar();
    return 0;
}

float purchase1(){
    //300g of sweets + 400g of cookies
    float cost1;
    cost1 = (0.3*price_of_sweets) + (0.4*price_of_cookies);
    return(cost1);
}

float purchase2(){
    //3x  2kg of cookies + 1,8 kg of sweets
    float cost2;
    cost2 = 3 * ( (2 * price_of_cookies) + (1.8 * price_of_sweets) );
    return(cost2);
}
