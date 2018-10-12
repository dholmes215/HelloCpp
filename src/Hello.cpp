#include <fmt/core.h>

#include <iostream>

int main(int /*argc*/, char ** /*argv*/)
{
    const char *const iostreamsStr = "iostreams";
    std::cout << "Hello, World using " << iostreamsStr << "!\n";

    const char *const fmtStr = "fmt";
    fmt::print("Hello, World using {}!\n", fmtStr);

    return 0;
}
