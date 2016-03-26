#include <iostream>

int main()
{
    int n;
    std::cout << "N: ";
    std::cin >> n;

    int prev = 1, current = 1;
    for(size_t i = 2; i < n; ++i)
    {
        int temp = prev;
        prev = current;
        current = current + temp;
    }
    std::cout << "Nth fibonacci number: " << current << std::endl;
    return 0;
}

