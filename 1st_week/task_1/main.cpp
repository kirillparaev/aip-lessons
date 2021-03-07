#include <iostream>
#include <fstream>

//Вывести на экран Первую букву имени из символов "*" (звездочка)

int main()
{
    std::ofstream outFile;
    outFile.open("output.txt");


    outFile << "**   **\n";
    outFile << "**  **\n";
    outFile << "** **\n";
    outFile << "****\n" ;
    outFile << "****\n" ;
    outFile << "** **\n" ;
    outFile << "**  **\n" ;
    outFile << "**   **\n" ;

    std::cout << "Check output.txt file in program's directory" << std::endl;

    outFile.close();

    std::getchar();
    std::getchar();

    return 0;
}
