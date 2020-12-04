#pragma once

#include <memory>
#include "tools.hpp"
#include "model.hpp"
class IController
{
public:
    IController() = default;
    virtual ~IController() = default;

    virtual void open_document() = 0;

    virtual void add_primitive(type_shape shape) = 0;

    virtual void delete_primitive(type_shape shape) = 0;

    virtual void save_document() = 0;
};

class Controller : public IController
{
public:
    Controller(std::shared_ptr<Model> model);

    virtual ~Controller() = default;

    virtual void open_document() override;

    virtual void add_primitive(type_shape shape) override;

    virtual void delete_primitive(type_shape shape) override;

    virtual void save_document() override;

private:
    std::shared_ptr<IModel> model;
};