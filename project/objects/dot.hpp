#include "baseShape.hpp"

struct Dot : BaseShape
{
private:
    int Height = 1;
    int Width = 1;

    Dot(int X, int Y, RGB color) : BaseShape(X, Y, color) {}

    virtual void paint(std::shared_ptr<IGraphic> graphic) override;
};
