#pragma once

#include "random/builder.hpp"
#include "random/collector.hpp"
#include "random/interfaces/randomgen.hpp"

template <Numerical T = int32_t, typename U = std::discrete_distribution<T>>
class Discrete : public Random<T, U>
{
  private:
    friend class Builder;
    friend class Collector;
    explicit Discrete(const std::initializer_list<double>& param) :
        Random<T, U>("discrete", U{param})
    {}
};
