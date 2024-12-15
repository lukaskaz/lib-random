#pragma once

#include "random/builder.hpp"
#include "random/collector.hpp"
#include "random/interfaces/randomgen.hpp"

template <Numerical T = int32_t, typename U = std::uniform_int_distribution<T>>
class Uniform : public Random<T, U>
{
  private:
    friend class Builder;
    friend class Collector;
    explicit Uniform(const std::pair<T, T>& param) :
        Random<T, U>("uniform", U{param.first, param.second})
    {}
};
