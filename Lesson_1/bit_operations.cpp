#include <iostream>

int main()
{
    int value;

    std::cout << "Value: ";
    std::cin >> value;

    for(size_t i = 0; i < 32; ++i)
    {
        std::cout << i << " bit is " << ((value & (1 << i)) != 0) << std::endl;
    }

    return 0;
}

