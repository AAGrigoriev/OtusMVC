#pragma once

#include <memory>
#include "objects/IShape.hpp"
class IFabrick
{
public:
    IFabrick() = default;
    virtual ~IFabrick() = default;

    virtual std::unique_ptr<IShape> create() = 0;
};
