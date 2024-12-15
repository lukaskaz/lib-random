#include "random/generators/uniform.hpp"

#include <iostream>

int main()
{
    auto uniint = Builder::get<Uniform<uint32_t>>(std::make_pair(0, 9));
    std::cout << "Uniform int values: " << uniint() << ", " << uniint() << ", "
              << uniint() << "\n";
    auto unidouble =
        Builder::get<Uniform<double, std::uniform_real_distribution<double>>>(
            std::make_pair(4.0, 5.0));
    std::cout << "Uniform double values: " << unidouble() << ", " << unidouble()
              << ", " << unidouble() << "\n";

    return 0;
}
