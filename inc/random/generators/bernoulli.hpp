#pragma once

#include "random/builder.hpp"
#include "random/collector.hpp"
#include "random/interfaces/randomgen.hpp"

template <Numerical T = bool, typename U = std::bernoulli_distribution>
class Bernoulli : public Random<T, U>
{
  private:
    friend class Builder;
    friend class Collector;
    explicit Bernoulli(double param) : Random<T, U>("bernoulli", U{param})
    {}
};
