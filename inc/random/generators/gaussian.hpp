#pragma once

#include "random/builder.hpp"
#include "random/collector.hpp"
#include "random/interfaces/randomgen.hpp"

template <Numerical T = double, typename U = std::normal_distribution<T>>
class Gaussian : public Random<T, U>
{
  private:
    friend class Builder;
    friend class Collector;
    explicit Gaussian(const std::pair<T, T>& param) :
        Random<T, U>("gaussian", U{param.first, param.second})
    {}
};
