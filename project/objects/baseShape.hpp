#pragma once

#include "IShape.hpp"

struct BaseShape : IShape
{
private:

protected:
    int x;
    int y;
    RGB color;

public:

    BaseShape(int X,int Y,RGB color);

    int          getX() override;
    int          getY() override;
    virtual void paint(std::shared_ptr<IGraphic> graphic) override;
};