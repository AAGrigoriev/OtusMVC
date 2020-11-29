#include "baseShape.hpp"

struct Circle : BaseShape
{
private:
    int radius;

public:
    Circle(int X, int Y, int Radius, RGB color) : BaseShape(X, Y, color), radius(Radius) {}

    int getRadius();

    virtual void paint(std::shared_ptr<IGraphic> graphic) override;
};
