#pragma once

#include "interfaces/randomgen.hpp"

class Collector
{
  public:
    template <typename T, typename P>
    static void add(const P& param)
    {
        auto item = std::shared_ptr<T>(new T(param));
        RandomIf::items.push_back(item);
    }

    static const decltype(RandomIf::items)& get()
    {
        return RandomIf::items;
    }
};
