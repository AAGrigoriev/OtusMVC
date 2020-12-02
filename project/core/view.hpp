#pragma once

#include "tools.hpp"
#include "graphic.hpp"

class IView
{
public:
    IView() = default;

    virtual ~IView() = default;

    virtual void button_open();

    virtual void button_close();

    virtual void button_new();

    virtual void button_save();

    virtual void button_add_dot();

    virtual void button_add_circle();
};

class View : public IView
{
public:
    View() = default;

    virtual ~View() = default;

    virtual void button_open()       override;

    virtual void button_close()      override;

    virtual void button_new()        override;

    virtual void button_save()       override;

    virtual void button_add_dot()    override;

    virtual void button_add_circle() override;

private:

    GraphicSimple simpleGraphic;
};