#include <iostream>
#include "vectorex/vector.hpp"

int main()
{
    Vector vec({13.0f, 2.0f, 3.0f});

    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "First Element: " << vec.get(0) << '\n';
    std::cout << "Second Element: " << vec.get(1) << '\n';
    std::cout << "Third Element: " << vec.get(2) << '\n';

    return 0;
}
