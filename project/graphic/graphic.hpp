
struct RGB
{
    int R;
    int G;
    int B;
};

class IGraphic
{

public:
    virtual void setColor(RGB rgb);

    virtual void drawOval(int x, int y, int R);

    virtual void drawRect(int x, int y, int Height, int Width);

    virtual void fillRect(int x, int y, int Height, int Width);
};

class GraphicSimple : public IGraphic
{
    virtual void setColor(RGB rgb) {}

    virtual void drawOval(int x, int y, int R) {}

    virtual void drawRect(int x, int y, int Height, int Width) {}

    virtual void fillRect(int x, int y, int Height, int Width) {}
};