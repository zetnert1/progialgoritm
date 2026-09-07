#include <iostream>

int main()
{
    int a;
    std::cout << "Enter number: " << std::endl;
    std::cin >> a;

    int b = a * a;
    int c = a * a * a;
    std::cout << "Square of number: " << b << std::endl;
    std::cout << "Cube of number: " << c;

    return 0;
}
