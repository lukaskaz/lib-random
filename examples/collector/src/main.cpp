#include "random/generators/uniform.hpp"

int main()
{
    Collector::add<Uniform<uint32_t>>(std::make_pair(0, 5));
    Collector::add<Uniform<double, std::uniform_real_distribution<double>>>(
        std::make_pair(1.0, 3.0));

    for (const auto& randomgen : Collector::get())
    {
        randomgen->simulate(200, true);
    }

    return 0;
}
