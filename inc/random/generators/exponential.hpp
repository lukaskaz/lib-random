#pragma once

#include "random/builder.hpp"
#include "random/collector.hpp"
#include "random/interfaces/randomgen.hpp"

template <Numerical T = double, typename U = std::exponential_distribution<T>>
class Exponential : public Random<T, U>
{
  private:
    friend class Builder;
    friend class Collector;
    explicit Exponential(double param) : Random<T, U>("exponential", U{param})
    {}
};
