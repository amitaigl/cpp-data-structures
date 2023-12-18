#include <iostream>

#define TEST(x) ((x) ? (void)(x) : PrintLine(__LINE__))

void PrintLine(size_t line)
{
    std::cout << "NOTE: THE LINE " << line << " WAS FAILED." << std::endl;
}