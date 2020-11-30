class IController
{
public:
    IController() = default;
    virtual ~IController() = default;
};

class Controller : public IController
{

};