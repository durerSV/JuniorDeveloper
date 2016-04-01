#include <iostream>

int main()
{
    int value;
    std::cin >> value;
    int counter = (value != 0), lastBit = value & 1;

    while (value)
    {
        int currBit = value & 1;
        counter += currBit ^ lastBit;
        value >>= 1;
        lastBit = currBit;
    }

    std::cout << counter << std::endl;
    return 0;
}


