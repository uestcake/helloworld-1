#include <iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    std::cout << "Enter two int numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product is " << v1 * v2 << std::endl;

    return 0;
}
