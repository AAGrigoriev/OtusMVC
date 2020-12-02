#include <memory>
#include <tools.hpp>

class IController
{
public:
    IController() = default;
    virtual ~IController() = default;

    virtual void open_document();

    virtual void create_new_document();

    virtual void add_primitive(type_shape shape);

    virtual void delete_primitive();

    virtual void save_document();

};

class Controller : public IController
{
public:
    Controller() = default;
    virtual ~Controller() = default;

    
};