#include <iostream>
#include <cmath>

int main()
{
    float x = 3.6;
    std::cout << pow(M_E, (x-2)) + abs(sinf(x)) - (pow(x,4) * cos(1/x));
    getchar();
    getchar();
    return 0;
}
