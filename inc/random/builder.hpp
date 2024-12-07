#pragma once

#include "interfaces/randomgen.hpp"

class Builder
{
  public:
    template <typename T, typename P>
    static T get(const P& param)
    {
        return T(param);
    }
};
